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
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
    int sec_max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] != max && arr[i] < sec_max)
        {
            sec_max = arr[i];
        }
    }

    printf("Max Number = %d\n", sec_max);
}
