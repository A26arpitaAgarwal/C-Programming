// File basics in c programming
#include <stdio.h>
int main()
{
    FILE *ptr;
    int n;

    // opening file in reading mode
    ptr = fopen("ab.txt", "r");

    if (ptr == NULL) // Checking whether file exist or not
    {
        printf("This file does not exist.\n");
    }
    else
    {
        fscanf(ptr, "%d", &n); // fscanf is used to take input from a file
        printf("The value of integer is %d", n);

        fclose(ptr);
        return 0;
    }

    /* opening file in writing mode
    ptr = fopen("a.txt", "w");

    opening binary file in reading mode
    ptr = fopen("a.txt", "rb");

    opening binary file in writing mode
    ptr = fopen("a.txt", "wb"); */
}