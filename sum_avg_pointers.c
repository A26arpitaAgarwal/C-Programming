// Calculating sum and average using pointers

#include <stdio.h>
int Calculate(int a, int b, int *sum, float *avg);
int main()
{
    int x = 3, y = 3, sum, avg;
    Calculate(x, y, &sum, &avg);
    printf("The sum of 2 numbers is %d\n", sum);
    printf("The average of 2 numbers is %d", avg);
    return 0;
}
int Calculate(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}