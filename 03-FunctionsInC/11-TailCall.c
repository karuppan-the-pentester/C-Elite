#include <stdio.h>

// Tail-recursive function with TCO
int factorial_tail(int n, int accumulator) {
    if (n == 0) {
        return accumulator;
    } else {
        return factorial_tail(n - 1, n * accumulator);
    }
}

int main() {
    int result = factorial_tail(5, 1);
    printf("Factorial: %d\n", result);
    return 0;
}
