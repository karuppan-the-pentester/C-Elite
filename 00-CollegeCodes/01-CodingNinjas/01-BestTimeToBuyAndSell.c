#include <stdio.h>

void main() {

    int NoOfElements,Prices[200],OutPut;
    int MaxPrice,MinPrice,MaxIndex=0,MinIndex=0;

//    printf("Enter the Number of Elements :");
    scanf("%d",&NoOfElements);

//    printf("Enter the price OneByOne :");
    for (int i = 0; i < NoOfElements; ++i) {
        scanf("%d",&Prices[i]);
    }

    for (int j = 0; j < NoOfElements; ++j) {

        MaxPrice = Prices[j];
        for (int i = j; i < NoOfElements; ++i) {
            if (MaxPrice < Prices[i]) {
                MaxPrice = Prices[i];
                MaxIndex = i;
            }
        }

        MinPrice = Prices[0];
        for (int i = 0; i < NoOfElements; ++i) {
            if (MinPrice > Prices[i]) {
                MinPrice = Prices[i];
                MinIndex = i;

                if( MaxIndex >= MinIndex ){
                    OutPut = MaxPrice - MinPrice;
                } else {
                    OutPut = (int) NULL;
                }
            }
        }

    //    printf("%d",OutPut);

        if (OutPut != (int) NULL){
            printf("%d",OutPut);
            break;
        }
//        else {
//            printf("0");
//        }
    }

    if (OutPut != (int) NULL){
        printf("%d",OutPut);
    }
    else {
        printf("0");
    }

}