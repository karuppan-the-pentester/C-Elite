#include <stdio.h>

// Macro for a generic swap function
#define SWAP(type, a, b) do { type temp = a; a = b; b = temp; } while (0)

int main() {
    int x = 5, y = 10;
    SWAP(int, x, y);
    printf("Swapped values: x=%d, y=%d\n", x, y);
    return 0;
}
