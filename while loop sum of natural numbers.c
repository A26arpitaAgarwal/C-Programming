// sum of natural numbers
#include <stdio.h>
int main()
{
    int i = 0, sum = 0, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of %d natural numbers is %d.\n", n, sum);
    return 0;
}