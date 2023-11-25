#include <stdio.h>

// Inline function to add two numbers
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5);
    printf("Sum: %d\n", result);
    return 0;
}
