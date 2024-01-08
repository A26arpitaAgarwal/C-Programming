// Program to find length of string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello";
    char *ptr = str; // ptr is equal to string base address now.
    int count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("The length of string is %d", count);
}