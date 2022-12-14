#!/bin/bash
gcc *.o -fPIC -shared -o liball.so
LD_PRELOAD=$PWD/liball.so 
