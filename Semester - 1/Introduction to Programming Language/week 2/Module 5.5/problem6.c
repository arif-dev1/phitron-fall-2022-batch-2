#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    while (N != M)
    {
        N = N % 24;
        printf("%d ", N);
        N++;
    }
    printf("%d", M);
}