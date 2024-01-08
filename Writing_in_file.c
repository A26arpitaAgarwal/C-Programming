// Writing in the file
#include <stdio.h>
int main()
{
    FILE *ptr;
    int number = 35;
    ptr = fopen("english.txt", "w"); // if the file does not exist, it will create one
    fprintf(ptr, "This is the english lecture notes.\n");
    fprintf(ptr, "The record number is %d ", number);
    fclose(ptr);
    return 0;
}