#include <stdio.h>>

int main()
{
    int number;
    printf("enter your number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive!");
    }
    else if (number < 0)
    {
        printf("Negetive!");
    }
    else
    {
        printf("Zero!");
    }
}