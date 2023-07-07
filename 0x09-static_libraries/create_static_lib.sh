#!/bin/bash

/* A script that creates a static file from all c files in current directory*/

gcc -c *.c
ar -rc liball.c *.o
ranlib liball.c
