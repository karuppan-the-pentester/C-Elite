#include <stdio.h>

void main() {

    int NoOfElements,Prices[200],OutPut;
    int MaxPrice,MinPrice,MaxIndex=0,MinIndex=0;

    // Asking Number of variables
    // printf("Enter the Number of Elements :");
    scanf("%d",&NoOfElements);

    // Asking the Elements
    // printf("Enter the price OneByOne :");
    for (int i = 0; i < NoOfElements; ++i) {
        scanf("%d",&Prices[i]);
    }

    // Looping For increase the Max Value
    for (int j = 0; j < NoOfElements; ++j) {

        // Finding Maximum Value
        MaxPrice = Prices[j];
        for (int i = j; i < NoOfElements; ++i) {
            if (MaxPrice < Prices[i]) {
                MaxPrice = Prices[i];
                MaxIndex = i;
            }
        }

        // Finding Minimum Value
        MinPrice = Prices[0];
        for (int i = 0; i < NoOfElements; ++i) {
            if (MinPrice > Prices[i]) {
                MinPrice = Prices[i];
                MinIndex = i;

                // Check the Condition by index Value of Max & Min Value
                if( MaxIndex >= MinIndex ){
                    OutPut = MaxPrice - MinPrice;
                } else {
                    OutPut = (int) NULL;
                }
            }
        }

        // If the Value Occurs Break the Loop
        if (OutPut != (int) NULL){
            break;
        }
    }

    // Displaying the Output
    if (OutPut != (int) NULL){
        printf("%d",OutPut);
    }
    else {
        printf("0");
    }

}