// SLICING THE STRING
#include <stdio.h>
#include <string.h>
char slice(char *str, int m, int n)
{
    int i = 0;
    while ((i + m) < n)
    {
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}
int main()
{
    char str[] = "Encyclopedia";
    slice(str, 1, 6);
    printf("The sliced string is: %s", str);
    return 0;
}

// c[]---> it can give us individual memories
// *c ---> it is read only memory which will not give individual items