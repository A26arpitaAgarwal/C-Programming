// calloc implementation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));

    // calloc stands for contiguous allocation and it always initialise each memory block with a default value of 0
    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d.\n", i + 1, ptr[i]);
    }

    // to de-allocate the memory we use free()
    free(ptr);
    return 0;
}