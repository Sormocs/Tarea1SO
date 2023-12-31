module Cronometro(
	
	input logic clk,
					reset,
	input logic switch_mode0,
					switch_mode1,
					switch_pause,
					play_btn,
	output logic[6:0] disp0,
							disp1,
							disp2,
							disp3,
							disp4,
							disp5,
	output logic[2:0] leds
	);
	
	procesador proc
	(
		.clk_clk(clk),
		.disp_0_external_connection_export(disp0),
		.disp_1_external_connection_export(disp1),
		.disp_3_external_connection_export(disp3),
		.disp_4_external_connection_export(disp4),
		.disp_5_external_connection_export(disp5),
		.reset_reset_n(reset),
		.switch_mode_0_external_connection_export(switch_mode0),
		.switch_mode_1_external_connection_export(switch_mode1),
		.switch_pause_0_external_connection_export(switch_pause),
		.start_button_0_external_connection_export(play_btn),
		.pio_leds_0_external_connection_export(leds),
		.pio_0_external_connection_export(disp2)
	);
	
endmodule