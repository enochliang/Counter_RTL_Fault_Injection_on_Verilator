VERILATOR_TB_FILE := sim_main.cpp
VERILATOR_DUMP_SIG_FILE := dump_sig_list_main.cpp
VERILATOR_FF_TB_FILE := ff_sim_main.cpp
VERILATOR_FI_TB_FILE := fi_sim_main.cpp
VERILATOR_SRC_DIR := ./src
TOP_NAME := tb
GATE_TOP_NAME := counter
DUMP_SIG_TOP_NAME := dump_sig_list
GATE_SRC_DIR := ./pre_map_design/generated



build:
	verilator -cc -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP --exe --trace --trace-structs --build --timing  $(VERILATOR_SRC_DIR)/$(VERILATOR_TB_FILE) ./rtl/*.sv -I$(VERILATOR_SRC_DIR) --top $(TOP_NAME) -j `nproc`

build-dump-sig:
	verilator -cc -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP --exe --trace --trace-structs --build --timing  $(VERILATOR_SRC_DIR)/$(VERILATOR_DUMP_SIG_FILE) ./rtl/*.sv -I$(VERILATOR_SRC_DIR) --top $(DUMP_SIG_TOP_NAME) -j `nproc`
	./obj_dir/Vdump_sig_list -t
	python3 VCDParser.py

build-ff:
	verilator -cc -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP --exe --trace --trace-structs --build --timing  $(VERILATOR_SRC_DIR)/$(VERILATOR_FF_TB_FILE) ./rtl/*.sv -I$(VERILATOR_SRC_DIR) --top ff_wrapper -j `nproc`
build-fi:
	verilator -cc -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP -Wno-WIDTH -Wno-MULTIDRIVEN --exe --trace --trace-structs --build --timing  $(VERILATOR_SRC_DIR)/$(VERILATOR_FI_TB_FILE) ./rtl/*.sv -I$(VERILATOR_SRC_DIR) --top fi_wrapper -j `nproc`

ast-rtl:
	verilator --xml-only -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP --Mdir ./ast $(VERILATOR_TB_PATH) ./rtl/*.sv -I$(VERILATOR_SRC_DIR) --top $(TOP_NAME) -j `nproc`

ast-gate:
	verilator $(GATE_SRC_DIR)/*.pre_map.v --xml-only -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP --Mdir ./ast

ast-dump-sig:
	verilator --xml-only -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP --Mdir ./ast $(VERILATOR_SRC_DIR)/$(VERILATOR_DUMP_SIG_FILE) ./rtl/*.sv -I$(VERILATOR_SRC_DIR) --top $(DUMP_SIG_TOP_NAME) -j `nproc`

sim:
	./obj_dir/Vtb

syn:
	./syn_yosys.sh

gen-rtl-sig-list:
	python3 GenRTLFFlist.py

clean:
	rm ./obj_dir -rf
	rm ./pre_map_design -rf
