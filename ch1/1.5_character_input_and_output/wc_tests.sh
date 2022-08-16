#!/bin/bash

echo "Exercise 1-11: What kinds of inputs are most likely to uncover bugs in the wc program?"
echo "Answer: Blank strings test word count and characters. Repeated blanks test if the word count stays accurate. "
echo ""
gcc wc.c -o wc.out

echo "Blank input tests if word count, character count, and line count is accurate"
echo "Expected:"
echo "0 0 0"
echo "Actual:"
echo "" | ./wc.out
echo "Analysis: There must be an implicit newline character in the bash string that is counted as a character and a line."
echo ""

echo "Input of one space will test if the word count increases after a space"
echo "Expected:"
echo "2 0 1"
echo "Actual:"
echo " " | ./wc.out
echo "Analysis: Works as expected."
echo ""

echo "Input of a newline tests character and line accuracy"
echo "Expected:"
echo "2 0 2"
echo "Actual:"
echo "
" | ./wc.out
echo "Analysis: Works as expected."
echo ""

echo "Input of one word \"hello\""
echo "Expected:"
echo "6 1 1"
echo "Actual:"
echo "hello" | ./wc.out
echo "Analysis: Works as expected."
echo ""

echo "Input of a special character, like \b"
echo "Expected:"
echo "2 0 1"
echo "Actual:"
echo "\b" | ./wc.out
echo "Analysis: I don't understand how bash treats escaped characters."
echo ""





