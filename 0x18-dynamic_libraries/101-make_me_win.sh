#!/bin/bash
wget -P .. https://raw.githubusercontent.com/nandwa-j/alx-low_level_programming/master/0x18-dynamic_libraries/1.so
export LD_PRELOAD="$PWD/../1.so"
