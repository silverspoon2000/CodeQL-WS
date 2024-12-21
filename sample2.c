#include <stdio.h>
int main() {
	char last_name[20];
	printf ("Enter your last name: ");
	scanf ("%s", last_name);
	printf("Entered last name is %s\n", last_name);
	}
/*appended from https://cwe.mitre.org/data/definitions/269.html */
//seteuid(0);
/* do some stuff */

//seteuid(getuid());
