#import sys
import os
import subprocess

proc = subprocess.Popen(["ls input_pattern"], stdout=subprocess.PIPE, shell=True)
(out, err) = proc.communicate()
f_list = str(out).replace("b'","").replace("'","").split("\\n")
print(f_list)
for f in f_list:
    if "control_" in f:
        cycle_info = f.split(".txt")[0].split("control")[1]
        os.system("cp input_pattern/"+f+" input_pattern/control.txt")
        os.system("./obj_dir/Vfi_wrapper")
        os.system("cp output/output.txt "+"fi_output/output"+cycle_info+".txt")

