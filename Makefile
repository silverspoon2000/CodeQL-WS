#all:
#	gcc -o main sample.c
	

all: program1 program2

program1: sample.c
    gcc -o main sample.c

program2: sample2.c
    gcc -o main sample2.c
