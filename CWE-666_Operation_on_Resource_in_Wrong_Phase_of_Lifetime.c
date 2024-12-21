#include <stdio.h>
#include <stdlib.h>

int main() { 
    int *data = (int *)malloc(sizeof(int)); 
    if (data == NULL) { 
        printf("Memory allocation failed\n"); 
        return 1; 
    } 
    *data = 10; 
 
    free(data);  // First free 
 
    printf("Value in data variable is: %d\n", *data); 
 
    free(data);  // Double free 
 
    return 0; 
}
