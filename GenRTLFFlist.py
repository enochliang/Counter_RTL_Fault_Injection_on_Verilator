import re
from lxml import etree
#import xml.etree.ElementTree as ET
import json
import xml.dom.minidom

class GenFFlist:
    def __init__(self,sig_list_path,beyond_top,top_name,ff_list_path,input_list_path,output_list_path):
        self.sig_tree_root = etree.parse(sig_list_path).getroot()
        self.beyond_top_txt = beyond_top
        self.top_name = top_name
        self.top_hier = beyond_top + top_name
        self.o_ff_list_path = ff_list_path
        self.o_input_list_path = input_list_path
        self.o_output_list_path = output_list_path
        
        # Dicts for Var info
        self.var_list_from_outside = []
        self.var_list_inside = []
        self.ff_info_dict = {}
        self.input_info_dict = {}
        self.output_info_dict = {}
        self.sig_info_dict = {}

        # Dicts
        self.var2bit_dict = {}
        self.bit2var_dict = {}
        self.num2bit_dict = {}
        self.bit2num_dict = {}
        self.gen_ff_dict()
        self.gen_io_dict()
        self.gen_sig_dict()
        self.split_signal()
        self.dump_output()

    # Filling self.ff_info_dict
    def gen_ff_dict(self):
        for var in self.sig_tree_root.findall(".//var[@FF='true']"):
            self.ff_info_dict[var.attrib["hier"].split(self.beyond_top_txt)[-1]] = {"size": int(var.attrib["size"])}

    # Filling self.input_info_dict self.output_info_dict
    def gen_io_dict(self):
        for var in self.sig_tree_root.findall(".//instance[@hier='"+self.top_hier+"']/var[@dir='input']"):
            if var.attrib["hier"] == "TOP.dump_sig_list.cc.clk":
                continue
            if var.attrib["hier"] == "TOP.dump_sig_list.cc.n_rst":
                continue
            self.input_info_dict[var.attrib["hier"].split(self.beyond_top_txt)[-1]] = {"size": int(var.attrib["size"])}

        for var in self.sig_tree_root.findall(".//instance[@hier='"+self.top_hier+"']/var[@dir='output']"):
            self.output_info_dict[var.attrib["hier"].split(self.beyond_top_txt)[-1]] = {"size": int(var.attrib["size"])}

    # Filling self.sig_info_dict
    def gen_sig_dict(self):
        var_id = 0
        for f in self.ff_info_dict.keys():
            sig = f.split(self.top_name+".")[-1]
            self.sig_info_dict[sig] = self.ff_info_dict[f]
            self.sig_info_dict[sig]["var_id"] = var_id
            self.var_list_from_outside.append(f)
            self.var_list_inside.append(sig)
            var_id = var_id + 1
        for i in self.input_info_dict.keys():
            sig = i.split(self.top_name+".")[-1]
            self.sig_info_dict[sig] = self.input_info_dict[i]
            self.sig_info_dict[sig]["var_id"] = var_id
            self.var_list_from_outside.append(i)
            self.var_list_inside.append(sig)
            var_id = var_id + 1

    def split_signal(self):
        for sig in self.sig_info_dict.keys():
            self.var2bit_dict[sig] = []
        bit_num = 0
        print(self.sig_info_dict)
        for sig in self.var2bit_dict.keys():
            hier = self.top_hier + "." + sig
            print(hier)
            size = self.sig_tree_root.find(".//var[@hier='"+hier+"']").attrib["size"]
            self.var2bit_dict[sig] = [ sig+"["+str(idx)+"]" for idx in range(int(size)-1,-1,-1)]
            for bit in self.var2bit_dict[sig]:
                self.bit2var_dict[bit] = sig
                self.bit2num_dict[bit] = str(bit_num)
                self.num2bit_dict[str(bit_num)] = bit
                bit_num = bit_num + 1




    def dump_output(self):
        data = {}
        var_info_dict = {}
        var_info_dict["ff_info_dict"] = self.ff_info_dict
        var_info_dict["input_info_dict"] = self.input_info_dict
        var_info_dict["output_info_dict"] = self.output_info_dict
        var_info_dict["sig_info_dict"] = {}
        top = self.top_name + "."
        for sig in self.ff_info_dict.keys():
            var_info_dict["sig_info_dict"][sig.split(top)[-1]] = self.ff_info_dict[sig]
        for sig in self.input_info_dict.keys():
            var_info_dict["sig_info_dict"][sig.split(top)[-1]] = self.input_info_dict[sig]
        
        # Compute total bit number.
        tot_bit_num = 0
        max_size = 0
        for sig in var_info_dict["sig_info_dict"].keys():
            size = int(var_info_dict["sig_info_dict"][sig]["size"])
            if size > max_size:
                max_size = size
            tot_bit_num = tot_bit_num + size
        data["max_size"] = str(max_size)
        data["tot_bit_num"] = str(tot_bit_num)
        
        data["var_info_dict"] = var_info_dict
        var_ref_dict = {}
        var_ref_dict["var2bit_dict"] = self.var2bit_dict

        var_ref_dict["bit2var_dict"] = self.bit2var_dict
        var_ref_dict["bit2num_dict"] = self.bit2num_dict
        var_ref_dict["num2bit_dict"] = self.num2bit_dict

        data["var_ref_dict"] = var_ref_dict
        var_ordered_list = {}
        var_ordered_list["var_list_from_outside"] = self.var_list_from_outside
        var_ordered_list["var_list_inside"] = self.var_list_inside
        data["var_ordered_list"] = var_ordered_list

        with open("rtl_sig_dict.json", 'w') as fp:
            json.dump(data, fp)

if __name__ == "__main__":
    sig_list_path = "vcd_sig.xml"
    beyond_top = "TOP.dump_sig_list."
    top_name = "cc"
    ff_list_path = "ff_list.json"
    input_list_path = "input_list.json"
    output_list_path = "output_list.json"
    generator = GenFFlist(sig_list_path,beyond_top,top_name,ff_list_path,input_list_path,output_list_path)

