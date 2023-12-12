// Importing the header files
#include <stdio.h>

// Function For Swapping
void Swapper(){

    int a = 10 , b = 20;
    a=a+b;
    b=a-b;
    a=a-b;

    printf("A= %d , B = %d\n",a,b);

}

// Function Pyramid 
void Pyramid() {

    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("\t\t\t\t\t");
        // Print spaces before the numbers
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        // Print the increasing part of the numbers
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }

        // Print the decreasing part of the numbers
        for(int j=i-1; j>=1; j--)
        {
            printf("%d",j);
        }

        // Print a new line
        printf("\n");
    }

}

// Creating the main function
void main(){

    Pyramid();



}