#!/bin/bash

mkdir -p build
clang++ $1.cpp -o build/$1.o && ./build/$1.o
