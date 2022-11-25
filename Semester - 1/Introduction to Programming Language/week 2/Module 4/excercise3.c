#include <stdio.h>

int main()
{
    int i, sum = 0;
    printf("The first 7 natural number is : \n");
    for (i = 1; i <= 7; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nThe Sum of Natural Number upto 7 terms : %d", sum);
}