#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    printf("The factors of 12 are: ");
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d", n);
    printf(".");
}