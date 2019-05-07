#!/bin/bash
curl -Lso "unrand.so" "https://github.com/DiegoOrejuela/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/unrand.so"
export LD_PRELOAD=unrand.so
