// Importing the header files
#include <stdio.h>

// Creating an function without return type and with parameters
int add(int a, int b){

    printf("The Value of A+B: %d\n",a+b);

}

// Creating the main function
int main(){

    int a,b;

    printf("Enter the value of A: ");
    scanf("%d",&a);

    printf("Enter the value of B: ");
    scanf("%d",&b);

    // Calling the add func
    add(a,b);


}