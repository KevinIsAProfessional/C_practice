all:
	gcc longest_line.c -o longest_line.out
	cat limerick.txt | ./longest_line.out
	gcc 80_char_lines.c -o 80_char_lines.out
	cat varied_lines.txt | ./80_char_lines.out
	gcc remove_trailing_blanks.c -o remove_trailing_blanks.out
	cat limerick.txt | ./remove_trailing_blanks.out > trailing_blanks.txt
	cat trailing_blanks.txt -E
	rm trailing_blanks.txt
	gcc reverse.c -o reverse.out
	cat limerick.txt | ./reverse.out

