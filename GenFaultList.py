import json
import math
import re

golden = open("./output/fault_free_dump.txt","r").readlines()[:-1]
sig_dict = json.loads(open("rtl_sig_dict.json","r").read())
sig_dict = sig_dict["var_info_dict"]["sig_info_dict"]
total_bit_num = 64
mask_bit_num = 64
var_num = 1
for idx in range(0,len(golden),2):
    g_i = golden[idx].strip()
    g_o = golden[idx+1].strip()
    g_i = re.sub(" +"," ",g_i).split(" ")
    g_o = re.sub(" +"," ",g_o).split(" ")
    if g_i[0] == "input:":
        pass
    else:
        print("Error")
    if g_o[0] == "output:":
        pass
    else:
        print("Error")
    control_file = open("./input_pattern/control_"+g_i[1]+"_"+g_o[1]+".txt","w")

    pattern = ""
    pattern = pattern + g_i[2] + "\n"
    pattern = pattern + g_o[2] + "\n"
    
    # Print Number of Injection Case.
    pattern = pattern + str(total_bit_num) + "\n"
    
    # Print Injection Cases.
    for var_idx in range(var_num):
        var_size = list(sig_dict.items())[var_idx][-1]["size"]
        for var_bit_idx in range(var_size): # 0 ~ (var_size - 1)
            bit_mask = ""
            for mask_bit_idx in range(mask_bit_num): # 0 ~ (mask_size - 1)
                if mask_bit_idx == var_bit_idx:
                    bit_mask = bit_mask + "1"
                else:
                    bit_mask = bit_mask + "0"
            mask_len = math.ceil(len(bit_mask)/4)
            num = '{:0'+str(mask_len)+'x}'
            bit_mask_hex = num.format(int(bit_mask,2)).split("x")[-1]
            pattern = pattern + str(var_idx) + " " + bit_mask_hex + "\n"
    
    control_file.write(pattern)
    control_file.close()
