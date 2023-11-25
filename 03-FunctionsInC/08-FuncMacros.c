#include <stdio.h>

// Macro to square a number
#define SQUARE(x) ((x) * (x))

int main() {
    int result = SQUARE(5);
    printf("Result: %d\n", result);
    return 0;
}
