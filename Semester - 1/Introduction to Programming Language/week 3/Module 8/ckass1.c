#include <stdio.h>

int main()
{
    int arr[10];
    arr[0] = 3450;
    arr[1] = 450;
    arr[2] = arr[0] - arr[1];

    printf("%d\n", arr[2]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[0]);
}