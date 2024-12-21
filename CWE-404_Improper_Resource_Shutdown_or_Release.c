#include <stdio.h>
#include <stdlib.h>

typedef struct { 
    char* color; 
    char* shape; 
} Preference; 
 
typedef struct { 
    char * name; 
    int age; 
    Preference *preferences; 
} User; 
 
int main() { 
    // Allocate memory for outer struct 
    User *outer = (User *)malloc(sizeof(User)); 
     
    if (outer == NULL) { 
        printf("Memory allocation failed\n"); 
        return 1; 
    } 
     
    outer->name = "John Doe"; 
    outer->age = 30; 
 
    // Allocate memory for inner struct 
    outer->preferences = (Preference *)malloc(sizeof(Preference)); 
    if (outer->preferences == NULL) { 
        printf("Memory allocation failed\n"); 
        free(outer); // Clean up the previously allocated memory 
        return 1; 
    } 
     
    // Perform operations with the inner struct 
    outer->preferences->color = "blue"; 
    outer->preferences->shape = "square"; 
     
    // Free the outer struct 
    free(outer); 
     
    return 0; 
}
