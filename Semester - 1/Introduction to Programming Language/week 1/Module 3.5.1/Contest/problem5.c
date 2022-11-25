#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    if (m < n)
    {
        printf("%d", -(m - n));
    }
    else
    {
        printf("%d", (m - n));
    }

    return 0;
}
