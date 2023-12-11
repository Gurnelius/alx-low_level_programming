#!/bin/bash

# Compile all .c files into object files
gcc -Wall -fPIC -c *.c

# Create a dynamic library from the object files
gcc -shared -o liball.so *.o

# Clean up - remove the object files
rm *.o
