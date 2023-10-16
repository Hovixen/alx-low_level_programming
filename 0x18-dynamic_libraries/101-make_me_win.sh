#!/bin/bash
wget -P /tmp/ https://github.com/Hovixen/alx-low_level_programming/raw/master/0x18-dynamic_libraries/file_to_use.so
export LD_PRELOAD=/tmp/file_to_use.so
