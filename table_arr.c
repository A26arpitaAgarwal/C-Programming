// storing multiplication table of any number in an array
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number which table wants to store: ");
    scanf("%d", &num);
    int table[10];
    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[i]);
    }
}