#!/bin/bash
wget -p /tmp https://github.com/hummingjay/alx-low_level_programming/blob/master/0x18-dynamic_libraries/mynum.so
export LD_PRELOAD=/tmp/mynum.so
