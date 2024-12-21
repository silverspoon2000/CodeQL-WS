all: program1 program2 program3 program4 program5

program1:
	gcc -Wall -o main sample.c
program2:
	gcc -o main sample2.c
program3:
	gcc -Wall -o main CWE-118_Incorrect_Access_of_Indexable_Resource.c
program4:
	gcc -Wall -o main CWE-400_Uncontrolled_Resource_Consumption.c
program5:
	gcc -Wall -o main CWE-404_Improper_Resource_Shutdown_or_Release.c
