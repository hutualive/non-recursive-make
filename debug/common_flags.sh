#!/bin/bash

# This is a shell script which defines debug compiler flags.
# I do it this way rather than using a makefile fragment ("common.mk") because I
# only use these flags during development.
COMPILER_FLAGS="-pedantic -std=c99 -fdiagnostics-color=auto -Wall -Wextra"

