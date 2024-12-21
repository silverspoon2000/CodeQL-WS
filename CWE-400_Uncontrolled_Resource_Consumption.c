#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int age;
} User;

int main() {
    User* user = (User *)malloc(sizeof(User));

    if (user == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Perform some operations with the allocated memory
    user->name = "John Doe";
    user->age = 30;

    return 0;
}
