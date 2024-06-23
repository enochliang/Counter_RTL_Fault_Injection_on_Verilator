module dump_sig_list(
	input clk,
	input rst,
	output logic _done
);

	counter cc(
		.n_rst(),
		.clk(),
		.counter_w()
	);
	always@(posedge clk)begin
		_done <= 1;
	end

endmodule
