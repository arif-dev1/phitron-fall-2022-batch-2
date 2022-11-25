#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a, b;
    char c;
    scanf("%d%c%d%c", &a, &c, &b, &c);
    int multi = a * b;
    printf("%d%c", multi, c);
    return 0;
}
