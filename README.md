# README
## Step-by-step

### Generate RTL-AST
Input:  RTL design
Output: RTL-AST
```
make ast-rtl
```

### Dump VCD Signal List
```
make dump-sig
```

### Generate a Dictionary of RTL Signals.
Input:  vcd_sig.xml
Output: rtl_sig_list.json
```
make gen-rtl-sig-list
```

### Dump Fault Free Logic Values.
```
make run-ff-sim
```

### Generate Fault List.
```
make gen-fault-list
```

### Run Fault Injection
```
make run-fi-sim
```
