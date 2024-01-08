// realloc implementation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at index %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d.\n", i + 1, ptr[i]);
    }

    // realloc the size of ptr --> now it can have storage to store 10 elements
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value at index %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value at index %d is %d.\n", i + 1, ptr[i]);
    }
}