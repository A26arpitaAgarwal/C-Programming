// malloc implementation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    // ptr = (int *)malloc(6*4); --> 4 bytes for integer in my computer architecture
    ptr = (int *)malloc(6 * sizeof(int));

    /* 1) int * --> represent the int pointer (we have to specify it as malloc default is void pointer)
    2) 6 is the number of elements space in the memory.
    3) sizeof() --> used because every computer architecture may have different byte of int or float or char. */

    // array can be made with the help of dynamic memory allocation(at runtime)
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at index %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d.\n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}