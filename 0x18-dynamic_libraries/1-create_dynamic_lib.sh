#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <arg1> [<arg2> ...]"
    exit 1
fi

gcc -fPIC -c *c
gcc 
