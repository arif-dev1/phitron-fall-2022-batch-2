#include <stdio.h>

int main()
{
    int a, b;
    printf("enter your numbers : ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("A is bigger");
    }
    else if (b > a)
    {
        printf("B is bigger");
    }
    else
    {
        printf("They are equal");
    }
}