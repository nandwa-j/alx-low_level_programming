#!/bin/bash
wget -P .. https://raw.githubusercontent.com/nandwa-j/alx-low_level_programming/master/0x18-dynamic_libraries/puts.so
export LD_PRELOAD="$PWD/../puts.so"
