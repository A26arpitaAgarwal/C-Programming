// Dynamically storing the table of any integer
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number you want table of: ");
    scanf("%d", &n);
    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d X %d = %d \n", n, i + 1, ptr[i]);
    }

    printf("------------------------------------------------\n\n");

    // reallocating the size t store uptill 15 times
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d X %d = %d\n", n, i + 1, ptr[i]);
    }
    return 0;
}