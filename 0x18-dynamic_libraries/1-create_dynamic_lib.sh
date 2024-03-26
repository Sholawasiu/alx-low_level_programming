#!/bin/bash

gcc -fpic -c *.c 

gcc -shared -o -L. liball.so *.o
