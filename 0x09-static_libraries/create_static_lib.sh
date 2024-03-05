#!/bin/bash
ar -rc lioball.a *.o
gcc -c *.c
ar rcs liball.a *.o
