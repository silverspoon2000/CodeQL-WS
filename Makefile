all: program1 program2

program1:
	gcc -o main improper.c
program2:
	gcc -o main sample.c
