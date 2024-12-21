#include <stdio.h>

int main() {
    // Maximum value for a 32-bit signed integer
    int value = 2147483646; 

    // Incrementing the value by 2 will cause an integer overflow
    value += 2;

    // The result will not be as expected
    printf("Result: %d\n", value);

    return 0;
}
