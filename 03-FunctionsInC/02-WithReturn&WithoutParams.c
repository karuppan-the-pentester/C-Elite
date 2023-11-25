// Importing the header files
#include <stdio.h>

// Creating an function with return type and without parameters
int add(){

    int a,b;

    printf("Enter the value of A: ");
    scanf("%d",&a);

    printf("Enter the value of B: ");
    scanf("%d",&b);
    
    // Returning the func
    return a + b;
}

// Creating the main function
int main(){

    // Calling the add func
    printf("The Value of A+B: %d\n",add());


}