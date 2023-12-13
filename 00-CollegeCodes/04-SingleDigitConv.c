#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reversed = 0;
    int original = n;
    int remainder;
    if(n < 0 ){
//        printf("It is negative integer");
        n=n*-1;
    }
    while (true) {
        while (n > 0) {
            remainder = n % 10;
            reversed = reversed + remainder;
            n = n / 10;
        }
        n = reversed;
        reversed = 0;
        if(n < 10){
            break;
        }
    }


    printf("%d",n);


}