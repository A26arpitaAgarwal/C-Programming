// repeat 8 no. of times using wwhile loop
#include <stdio.h>
int main()
{
    int n, i = 1, counter = 0;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    while (counter < n)
    {
        printf("%d\n", n);
        counter++;
    }
    return 0;
}