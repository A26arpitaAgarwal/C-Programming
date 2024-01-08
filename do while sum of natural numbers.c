// sum of natural numbers
#include <stdio.h>
int main()
{
    int i = 0, sum = 0, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;

    } while (i <= n);
    printf("The sum of %d natural numbers is %d.\n", n, sum);
    return 0;
}