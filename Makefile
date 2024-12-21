#all:
#   gcc -o main sample.c

all: program1

program1: main sample.c
    gcc -o program1 sample.c

#program2: main sample2.c
#    gcc -o program2 sample2.c
