// add two numbers
#include <stdio.h>
int num1, num2;
int add;
int sum(int a, int b); // function prototype
int main()
{
    sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    printf("enter the numbers: \n");
    scanf("%d %d", &num1, &num2);
    add = num1 + num2;
    printf("The sum of a and b is: %d", add);
}