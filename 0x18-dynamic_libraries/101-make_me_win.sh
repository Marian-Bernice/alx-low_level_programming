#!/bin/bash
wget -P /tmp https://github.com/Marian-Bernice/alx-low_level_programming/main/0x18-dynamic_libraries/numbers.so
export LD_PRELOAD=/tmp/numbers.so
