#include <stdio.h>
#include <stdlib.h>
 
void vulnerableFunction(char *input) { 
    char buffer[8]; 
    strcpy(buffer, input); 
} 
 
int main() { 
    char userInput[16]; 
    printf("Enter a string: "); 
    scanf("%s", userInput); 
    vulnerableFunction(userInput); 
    printf("Execution continues after vulnerable function.\n"); 
    return 0; 
}
