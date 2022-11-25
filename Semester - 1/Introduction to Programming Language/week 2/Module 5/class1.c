#include <stdio.h>

int main()
{
    int n, i, w, sum = 0;
    printf("Enter Your Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter your %d number : ", i);
        scanf("%d", &w);
        sum += w;
    }
    printf("Total %d", sum);
}
