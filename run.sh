#!/bin/bash

# initialize cmake environment
# this avoids errors that build/release does not exist
# and errors that the cache cannot be found
# https://stackoverflow.com/a/74338548/6454116

cmake -S . -B ./build/release 

(
  # utilizing cmake's parallel build options
  # recommended: -j <number of processor cores + 1>
  # This is supported in cmake >= 3.12 use -- -j5 for older versions
  cmake --build build/release -j 5
)

result=$?
if [ ${result} == 0 ]; then
  ./bin/app
fi