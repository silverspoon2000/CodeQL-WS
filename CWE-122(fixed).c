#include <stdio.h>

int main() {
    char last_name[20];
    printf("Enter your last name: ");
    scanf("%19s", last_name);  /*this line fixes the last_name buffer overflow*/
    printf("Entered last name is %s\n", last_name);
}
