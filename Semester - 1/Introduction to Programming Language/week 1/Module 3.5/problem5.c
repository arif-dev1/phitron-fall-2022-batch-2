#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter your numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}