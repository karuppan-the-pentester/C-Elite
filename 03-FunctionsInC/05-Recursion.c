// Importing the header files
#include <stdio.h>

// Creating an function for recursion
int fact(int n){

    // Returning the func
    if(n == 1){
        
        return n;

    } else{
        // Recursively call itself until n = 1
        n= fact(n-1) * n;
    }
}

// Creating the main function
int main(){

    int n;

    printf("Enter the value of N: ");
    scanf("%d",&n);

    printf("The factorial of N: %d\n",fact(n));


}