#!/bin/bash
## This script builds cmake 
cmake .
cmake --build .

# This script runs the ELF file compiled by cmake
echo
echo "Running the ELF file compiled by cmake, ./shape"
echo
./shape
echo


