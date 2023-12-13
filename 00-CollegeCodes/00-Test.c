#include <stdio.h>

int Palindrome() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reversed = 0;
    int original = n;
    int remainder;
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome number.\n", n);
    }
    else {
        printf("%d is not a palindrome number.\n", n);
    }
}


void Break(){

    for (int i=0;i<50;i++){
        printf("%d\n",i);
        if(i==33){
            printf("This loop can't execute");
            break;
        }
    }

}



void Continue(){

    for (int i=1;i<5;i++){
        for (int j = 1; j < 5; ++j) {
            printf("%d%d ",i,j);
            if(i!=j){
                printf("  ");
                break;
            }
        }
        printf("\n");
    }
}



void Goto(){

    int i;
    inputs: printf("Enter the value which is greater than 10: ");
    scanf("%d",&i);
    if(i>10){
        printf("Thank You\n");
    } else{
        printf("The Value is less than 10,Sorry");
        goto inputs;
    }
}



void Star(){

    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\t\t\t\t\t");
        for (int j = 0; j < n-i ; ++j) {
            printf(" ");
        }
        for (int j = 0;  j < (2*i)+1; j++) {
            printf("*");
        }
        printf("\n");
    }


    for(int i=0;i<n-1;i++){
        printf("\t\t\t\t\t");
        for (int j = n; j > n-i ; j--) {
            printf(" ");
        }
        for (int j = 2*n;  j > (2*i)+1; j--) {
            printf("*");
        }
        printf("\n");
    }
}




void OnseStar(){
    int n = 15;
    for(int i=0;i<n;i++){
        printf("\t\t\t\t\t");
        for (int j = n; j > n-i ; j--) {
            printf(" ");
        }
        for (int j = n;  j > i; j--) {
            printf("*");
        }
        printf("\n");
    }
}




void HalfStar(){

    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\t\t\t\t\t");
        for (int j = 0; j < n-i ; ++j) {
            printf(" ");
        }
        for (int j = 0;  j < (i)+1; j++) {
            printf("*");
        }
        printf("\n");
    }


    for(int i=0;i<n-1;i++){
        printf("\t\t\t\t\t");
        for (int j = n; j > n-i ; j--) {
            printf(" ");
        }
        for (int j = (2*n)+1;  j > n+i; j--) {
            printf("*");
        }
        printf("\n");
    }
}


void SumOfAddEven() {
    int odd = 0, even = 0, n = 5;
    for (int i = 0; i< n+1; i++) {
        if (i % 2 == 0) {
            even = even + i;
        } else {
            odd = odd + i;
        }
    }
    printf("Odd: %d \nEven: %d",odd,even);
}


void OddEven() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even\n");
    }else
    {
        printf("Odd\n");
    }

    scanf("%d", &num);
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");



    scanf("%d", &num);
    if (num & 1 == 0)
    {
        printf("Even.\n");
    }
    else
    {
        printf("Odd");
    }
}

int main(){

    HalfStar()   ;
    return 0;
}


