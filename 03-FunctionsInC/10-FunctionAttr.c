#include <stdio.h>

// Function with the optimize attribute
int add(int a, int b) __attribute__((optimize("O2")));

int main() {
    int result = add(5, 3);
    printf("Result: %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
