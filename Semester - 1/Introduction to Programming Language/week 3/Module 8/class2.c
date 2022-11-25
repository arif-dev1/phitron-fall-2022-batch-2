#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d - %d\n", i, arr[i]);
    }
}
