all:
	gcc file_copier.c -o file_copier.out
	echo "this is a small file" | ./file_copier.out
	gcc print_eof.c -o print_eof.out
	./print_eof.out
	gcc character_counting.c -o character_counting.out
	echo "this has 23 characters" | ./character_counting.out
	gcc line_counting.c -o line_counting.out
	echo "this has 6 lines \n\n\n\n\n" | ./line_counting.out
	gcc blank_counting.c -o blank_counting.out
	echo "this has 7 blanks	\n\t" | ./blank_counting.out
	gcc compress_blanks.c -o compress_blanks.out
	echo "   compress     blanks     please  .   " | ./compress_blanks.out
	gcc print_escape_characters.c -o print_escape_characters.out
	echo "This is a tab\tthis is a backspace\bthis is a slash\\" | ./print_escape_characters.out
	gcc wc.c -o wc.out
	echo "there are 63 characters\n\tthere are 12 words\n\tthere are 3 lines" | ./wc.out
	./wc_tests.sh
	gcc one_word_per_line.c -o one_word_per_line.out
	echo 'this is 		a \n\n\n new thing' | ./one_word_per_line.out
