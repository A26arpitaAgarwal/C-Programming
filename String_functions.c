// Strings pre-defined functions
#include <stdio.h>
#include <string.h>
int main()
{
    // strlen
    char str[] = "Hello World";
    char str4[] = "Hello World";
    printf("Length of str is %d\n", strlen(str));

    // strcpy
    char str2[15];
    strcpy(str2, str);
    printf("Copied string is %s\n", str2);

    // strcat
    char str3[] = "There";
    strcat(str, str3); // value will go in str, it go without space
    printf("Now concatenated string is %s\n", str);

    // strcmp ---> if string same then print 0 otherwise 1, and if first mismatching character's ASCII value come before other, then print -1(such as p comes before then z)
    int val = strcmp(str, str2);
    int val2 = strcmp(str, str3);
    int val3 = strcmp(str, str4);
    printf("After comparing: %d %d %d\n", val, val2, val3);

    return 0;
}