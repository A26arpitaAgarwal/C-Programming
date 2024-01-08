// printing sum of n natural numbers using recursion
#include <stdio.h>
int natural_no(int a);
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of %d natural numbers is = %d ", n, natural_no(n));
    return 0;
}

int natural_no(int a)
{
    if (a != 0)
    {
        return a + natural_no(a - 1);
    }
    else
    {
        return a;
    }
}