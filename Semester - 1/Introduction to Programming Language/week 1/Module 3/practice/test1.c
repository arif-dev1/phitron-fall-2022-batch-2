#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("enter your numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("Number 1");
    }
    else if (num2 > num1)
    {
        printf("Number 2");
    }
    else
    {
        printf("Equal");
    }
}