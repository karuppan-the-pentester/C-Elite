// Importing the header files
#include <stdio.h>

// Creating the main function
void main(){

    int n,counter=2;
    printf("Enter the lenght: ");
    scanf("%d",&n);
    printf("\n");
    if(n == 1) {
        printf("1");
    } else if (n == 2 ) {
        printf("12");
    } else if ( n == 3 ) {
        printf("122");
    } else if ( n > 3 ) {
        printf("12");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i-1; j++) {
                counter++;
                printf("%d",i);
                if (counter >= n ) {
                    break;
                }
            }
            if (counter >= n ) {
                break;
            }
        }
    }
//    printf("%d",counter);
    printf("\n");

}