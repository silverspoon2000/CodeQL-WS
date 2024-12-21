#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    //Off-by-one error: Loop runs one iteration beyond the array size
    for (int i = 0; i <= 5; i++) {
        numbers[i] *= 2;
    }

    return 0;
}
