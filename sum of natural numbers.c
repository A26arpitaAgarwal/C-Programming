// sum of n natural numbers
#include <stdio.h>
int sum = 0, i, n;
int main()
{
    printf("enter the value of n:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of %d natural numbers is %d.\n", n, sum);
    return 0;
}