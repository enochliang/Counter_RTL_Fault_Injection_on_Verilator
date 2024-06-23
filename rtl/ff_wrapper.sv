module ff_wrapper(
	input clk,
	input rst,
	output logic _done
);
	logic [63:0] c;
	integer o_file;

	// Generate
	logic [63:0] signal_i, signal_o;
	assign signal_i = {cc.counter};
	assign signal_o = {cc.counter};

	initial begin
		o_file = $fopen("output/fault_free_dump.txt","w");
	end
	always@(negedge clk)begin
		if (clk_counter > 1) begin
                	$fwrite(o_file,"output: %d %h\n",clk_counter,signal_o);
		end
                $fwrite(o_file,"input: %d %h\n",clk_counter,signal_i);
        end

	logic [63:0] clk_counter;
	initial clk_counter = 'b0;
	always@(posedge clk)begin
		clk_counter <= clk_counter + 1;
	end

	// Generate
        counter cc(
                .n_rst(rst),
                .clk(clk),
                .counter_w(c)
        );

        always@(posedge clk)begin
		// Setting
                if(clk_counter == 'd64)begin
                        _done <= 1;
                end else begin
                        _done <= 0;
                end
        end

endmodule
