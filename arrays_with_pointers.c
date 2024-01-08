// Accessing arrays through pointers
#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0]; // ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks for student %d:", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    printf("Marks are : \n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", marks[i]);
    }
    return 0;
}