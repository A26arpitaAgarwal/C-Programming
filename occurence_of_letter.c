// FINDING THE OCCURENCE OF A GIVEN LETTER

#include <stdio.h>
#include <string.h>
char occurence(char str[], char c)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char str[10];
    char n;
    printf("Enter the string you want to check the number of occurences of a letter: ");
    gets(str);
    printf("Enter the variable you want to count: ");
    scanf("%c", &n);
    int count = occurence(str, n);
    printf("\nThe occurence is %d", count);
    return 0;
}