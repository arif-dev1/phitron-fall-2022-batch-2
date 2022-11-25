#include <stdio.h>

int main()
{
    int a, b;
    printf("enter your numbers : ");
    scanf("%d %d", &a, &b);

    if (a + b == 100)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}