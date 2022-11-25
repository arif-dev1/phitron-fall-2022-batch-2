#include <stdio.h>

int main()
{
    int a;
    printf("Enter Your Number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}