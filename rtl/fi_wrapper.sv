module fi_wrapper(
	input clk,
	input rst,
	output logic _done
);
	logic clk_main;
	logic [63:0] c;
	logic observe_flag, inject_flag;
	int i_file, o_file, golden_file;
	logic [63:0] case_num;
	logic [63:0] signal_sel;
	logic [63:0] bit_mask;
	logic [63:0] golden, golden_next, faulty;
	logic [63:0] clk_counter;


	initial begin
		i_file = $fopen("input_pattern/control.txt","r");
		o_file = $fopen("output/output.txt","w");

		$fscanf(i_file,"%h\n",golden);
		$fscanf(i_file,"%h\n",golden_next);
		$fscanf(i_file,"%d\n",case_num);
		$fwrite(o_file,"%h\n",golden);
		$fwrite(o_file,"%d\n",case_num);
	end


	// Generate Main Clock For Design
	initial clk_main = 0;
	always@(posedge clk)begin
		clk_main = ~clk_main;
	end

	// Compare Faulty & Golden
	always@(negedge clk_main)begin
		if (observe_flag & !_done)begin
			//observe
			$fwrite(o_file,"%d %h %h\n",signal_sel,bit_mask,golden_next^faulty);
		end
	end

	// Fault Injection Flow
	always@(negedge clk)begin
		if (clk_main)begin
			// reading faulty logic value
			faulty <= {cc.counter};//[gen]
			// filling golden logic value
			{cc.counter} <= golden;//[gen]
		end else begin
			// fault injection
        	        $fscanf(i_file,"%d %h\n",signal_sel,bit_mask);
			if (signal_sel == 'd0)begin //[gen]
				cc.counter <= cc.counter ^ bit_mask;
			end
		end
        end
	


	initial observe_flag = 0;
	always@(posedge clk_main)begin
                if (clk_counter == case_num+1 || clk_counter == 0) begin
                        observe_flag <= 0;
		end else begin
                        observe_flag <= 1;
		end
        end

	initial inject_flag = 1;
	always@(posedge clk_main)begin
                if (clk_counter == case_num) begin
                        inject_flag <= 0;
                end else begin
                        inject_flag <= 1;
		end
        end

        counter cc(
                .n_rst(rst),
                .clk(clk_main),
                .counter_w(c)
        );

	initial clk_counter = 0;
        always@(posedge clk_main)begin
		if (clk_counter == case_num+1) begin
			clk_counter <= 1;
		end else begin
			clk_counter <= clk_counter + 1;
		end
	end


        always@(posedge clk_main)begin
                if(clk_counter == case_num+1)begin
                        _done <= 1;
                end else begin
                        _done <= 0;
                end
        end

	final begin
		$display("Fault Injection Process Finished!!!");
		$fclose(i_file);
		$fclose(o_file);
	end

endmodule
