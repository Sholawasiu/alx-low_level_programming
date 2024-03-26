#!/bin/bash

OUTPUT_DIR="./lib"

mkdir -p $OUTPUT_DIR

gcc -fpic -c *.c 

gcc -shared -o $OUTPUT_DIR/liball.so *.o
