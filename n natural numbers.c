// print n natural numbers
#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    do
    {
        printf("The value of i is : %d \n", i);
        i++;
    } while (i <= n);
    return 0;
}
