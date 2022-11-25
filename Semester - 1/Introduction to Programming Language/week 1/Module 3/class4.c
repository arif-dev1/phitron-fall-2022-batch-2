#include <stdio.h>

int main()
{
    // int a, b;
    // printf("Enter your two numbers : ");
    // scanf("%d %d", &a, &b);

    // if (a > b)
    // {
    //     printf("Number A is Big");
    // }
    // else if (a < b)
    // {
    //     printf("Number B is Big");
    // }
    // else
    // {
    //     printf("Number is Equal");
    // }

    int a, b, c;

    printf("Enter your number : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Number A is Big!");
    }
    else if (b > a && b > c)
    {
        printf("Number B is Big!");
    }
    else
    {
        printf("Number C is Big!");
    }
}