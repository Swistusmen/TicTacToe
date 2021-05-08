#!/bin/bash
mkdir build
cd build
cmake -S .. -B $(pwd)
make