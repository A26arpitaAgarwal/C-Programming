// swaping two numbers using call by reference
#include <stdio.h>
void WrongSwap(int a, int b);
void Swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("The numbers before swapping are %d and %d.\n", x, y);
    // WrongSwap(x, y);
    Swap(&x, &y); // will work due to call by reference
    printf("The numbers after swapping are %d and %d.", x, y);
    return 0;
}
void WrongSwap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Swap(int *a, int *b)
{
    int temp;
    temp = *a; // a is address and *a is the value of address
    *a = *b;
    *b = temp;
}