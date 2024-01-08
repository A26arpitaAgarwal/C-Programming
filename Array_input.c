// Array input and printing

#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
