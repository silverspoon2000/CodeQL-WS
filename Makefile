all: program1 program2

program1:
	gcc -Wall -o main sample.c

program2:
	gcc -Wall -o main sample2.c
