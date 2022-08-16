all:
	gcc longest_line_global.c -o longest_line_global.out
	cat limerick.txt | ./longest_line_global.out
	gcc detab.c -o detab.out
	echo "0-2-4-6-8-0-2-4-6-8-0"
	echo "This is line one\n \tthis is line two\n\t\tline 3\n\t\t\tline 4" | ./detab.out
	echo "0-2-4-6-8-0-2-4-6-8-0"
	echo " \tone space then tab\n  \ttwo spaces and then tab\n\t \ttab space tab" | ./detab.out
	echo "0-2-4-6-8-0-2-4-6-8-0-2-4-6-8-0-2-4-6-8-0"
	echo "the\tthen tab\t\tthen another" | ./detab.out

