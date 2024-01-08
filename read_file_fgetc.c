// getc and putc demonstratio
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("english.txt", "r");
    char c = fgetc(ptr);

    // to read characters from a file --> fgetc
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
}