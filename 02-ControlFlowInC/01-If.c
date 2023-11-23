// Importing the header files
#include <stdio.h>

// Creating the main function
int main(){

    // Defining a variable for storing the input
    int points;

    // Creating label for input
    printf("Enter your point: ");

    // Storing the input to the variable
    scanf("%d",&points);

    // Checking whether the point is more than 5 or not
    if (points >= 5 ){

        // Displaying the output
        printf("Your mark '%d' is more than 4\n",points);
    }

    return 0;
}