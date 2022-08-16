#!/bin/bash

echo "  gcc $FILENAME.c -o $FILENAME.out" >> Makefile
echo "  cat $INFILE | ./$FILENAME.out"

