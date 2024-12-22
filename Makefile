all: program1 program2 program3 program4 program5 program6 program7 program9 program10
program1:
	gcc -Wall -o main sample.c
program2:
	gcc -Wall -o main sample2.c
program3:
	gcc -Wall -o main CWE-118_Incorrect_Access_of_Indexable_Resource.c
program4:
	gcc -Wall -o main CWE-400_Uncontrolled_Resource_Consumption.c
program5:
	gcc -Wall -o main CWE-404_Improper_Resource_Shutdown_or_Release.c
program6:
	gcc -Wall -o main CWE-665_Improper_Initialization.c
program7:
	gcc -Wall -o main CWE-666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime.c
program9:
	gcc -Wall -o main CWE-190_Integer_Overflow.c
program10:
	gcc -Wall -o main CWE-193_Off_by_One.c
