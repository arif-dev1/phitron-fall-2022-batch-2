#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d Evens\n", arr[i]);
        }
        else
        {
            printf("%d Odds\n", arr[i]);
        }
    }
}