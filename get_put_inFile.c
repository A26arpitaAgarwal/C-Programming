// getc and putc demonstratio
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("english.txt", "r");

    // to read characters from a file --> fgetc
    char c = fgetc(ptr);
    printf("%c", c);

    // used to write character in the file --> putc --> putc(character, pointer)
    ptr = fopen("english.txt", "w");
    putc('B', ptr);
    fclose(ptr);

    return 0;
}