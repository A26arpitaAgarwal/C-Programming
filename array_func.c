// Passing array to a function
#include <stdio.h>
int PrintArray(int *ptr, int n)
{
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *ptr); // or we can write = *(ptr + i), deframing
        ptr++;
    }
    *(ptr + 2) = 54;
}

/* ANOTHER METHOD
int PrintArray(int ptr[], int n)
{
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
        ptr++;
    }
    ptr[2]=54;
}*/

void main()
{
    int arr[] = {12, 34, 56, 78};
    PrintArray(arr, 4);
    printf("\nThe third element is %d\n", arr[2]); // arrays are mutable
}