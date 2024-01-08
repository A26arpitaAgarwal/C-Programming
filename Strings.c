// Strings introduction and printing
#include <stdio.h>
#include <string.h>
int main()
{
    /* METHODS TO IMPLEMENT STRING ARRAY
    char *ptr = "Greetings";
    ptr = "Hello"; ---> It will change the greetings to hello (reinitialise)
    char ptr[]; */

    char str[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");

    // ANOTHER METHOD TO PRINT
    char str2[] = "Hello World";
    printf("%s", str2);

    // INPUT METHOD

    char str3[10];
    printf("\nEnter your name: ");
    // scanf("%s", str3); no need of & as str3 contains the address of first block address
    gets(str3); // used to get the multiword string including spaces
    // puts is used to print the string and places the cursor on the next line.
    printf("\nYour name is %s ", str3);
    return 0;
}