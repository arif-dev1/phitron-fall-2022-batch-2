#include <stdio.h>

int main()
{
    long long int n, sum = 0;
    scanf("%lld", &n);

    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%lld", sum);
}