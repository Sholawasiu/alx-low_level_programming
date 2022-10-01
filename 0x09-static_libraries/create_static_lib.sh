#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ar -rcs liball.a *.o
