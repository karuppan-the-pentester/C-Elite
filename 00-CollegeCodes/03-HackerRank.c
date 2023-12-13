#include <stdio.h>

void display_binary(int);

int main()
{
    int num;
    scanf("%d", &num);
    display_binary(num);
    return 0;
}

void display_binary(int num)
{
    int bin[32];
    int i = 0;
    while (num > 0)
    {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }

    printf("\n");
}
