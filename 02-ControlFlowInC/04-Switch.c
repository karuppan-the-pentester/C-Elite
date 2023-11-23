// Importing the header files
#include <stdio.h>

// Creating the main function
int main(){

    // Defining a variable for storing the input
    char Grade;

    // Creating label for input
    printf("Enter your Grade: ");

    // Storing the input to the variable
    scanf("%s",&Grade);

    // Checking the Grade
    switch (Grade) {

        // Grade is 'A'
        case 'A':
            printf("Your mark is Good\n");
            break;

        // Grade is 'B'
        case 'B':
            printf("Your mark is Average\n");
            break;

        // Grade is 'C'
        case 'C':
            printf("Your mark is Worse\n");
            break;

        // Input is among the Cases
        default:
            printf("Input is not correct");
        
    }
    

    return 0;
}