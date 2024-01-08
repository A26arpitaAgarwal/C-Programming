// reverse table of a number
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter the number :\n");
    scanf("%d", &n);

    for (i = 10; i; i--)
    {
        printf("% d * %d = %d\n", n, i, n * i);
        sum += (n * i);
    }
    printf("The sum of numbers is: %d", sum);
    return 0;
}