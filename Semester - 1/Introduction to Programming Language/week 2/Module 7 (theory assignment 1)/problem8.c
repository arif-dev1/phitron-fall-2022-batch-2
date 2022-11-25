#include <stdio.h>

int main()
{
    int num1, num2, n1, n2, temp, lcm;
    scanf("%d %d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    while (n2 != 0)
    {
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }
    lcm = (num1 * num2) / n1;
    printf("The LCM of %d and %d is %d.", num1, num2, lcm);
}