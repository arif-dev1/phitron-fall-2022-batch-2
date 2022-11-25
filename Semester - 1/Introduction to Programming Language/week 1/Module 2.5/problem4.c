#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter your 1st number : ");
    scanf("%d", &a);

    printf("Enter your 2nd number : ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Total Sum = %d\n", sum);

    int sub = a - b;
    printf("Total Sub = %d\n", sub);

    int multi = a * b;
    printf("Total multi = %d\n", multi);
}