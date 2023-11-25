// Importing the header files
#include <stdio.h>

// Creating an function with return type and parameters
int add(int a , int b){

    // Returning the func
    return a + b;
}

// Creating the main function
int main(){

    int a,b;

    printf("Enter the value of A: ");
    scanf("%d",&a);

    printf("Enter the value of B: ");
    scanf("%d",&b);

    // Calling the add func
    printf("The Value of A+B: %d\n",add(a,b));


}