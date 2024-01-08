// factorial of a number
#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter the number want to calculate factorial of: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The value of factorial of %d is %d", n, fact);
}