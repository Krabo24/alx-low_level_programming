#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o libsll.so *.o
export LD_LIBRARY_PSTH=.:$LD_LIBRARY_PATH
