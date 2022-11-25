#include <stdio.h>

int main()
{
    int a;
    printf("enter your number : ");
    scanf("%d", &a);

    if (a <= 100 && a >= 80)
    {
        printf("A+");
    }
    else if (a <= 79 && a >= 70)
    {
        printf("A");
    }
    else if (a <= 69 && a >= 60)
    {
        printf("A-");
    }
    else if (a <= 59 && a >= 50)
    {
        printf("B");
    }
    else if (a <= 49 && a >= 40)
    {
        printf("C");
    }
    else if (a <= 39 && a >= 33)
    {
        printf("D");
    }
    else if (a <= 32 && a >= 0)
    {
        printf("F");
    }
}