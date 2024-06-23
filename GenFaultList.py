import json
import math
control_file = open("./input_pattern/control.txt","w")
golden = open("./input_pattern/golden.txt","r").readlines()[0:2]

sig_dict = json.loads(open("sig_dict.json","r").read())

total_bit_num = 64
mask_bit_num = 64
var_num = 1

pattern = ""
pattern = pattern + golden[0]
pattern = pattern + golden[1]

# Print Number of Injection Case.
pattern = pattern + str(total_bit_num) + "\n"

# Print Injection Cases.
for var_idx in range(var_num):
    var_size = list(sig_dict["sig_dict"].items())[var_idx][-1]["size"]
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
