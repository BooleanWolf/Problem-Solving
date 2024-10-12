#!/bin/bash

# Check if filename is provided as an argument
if [ -z "$1" ]; then
  echo "Usage: ./run.sh <filename.cpp>"
  exit 1
fi

# Compile the C++ program
g++ "$1" -o program
if [ $? -ne 0 ]; then
  echo "Compilation failed"
  exit 1
fi

# Run the program with input from input.txt and capture the output
output=$(./program < input.txt)

# Display the output
echo "Program Output:"
echo "$output"


# Clean up by removing the compiled program
rm program