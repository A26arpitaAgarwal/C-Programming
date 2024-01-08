// Average of three numbers

#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);

    printf("The average of three numbers is: %.2f\n", average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}