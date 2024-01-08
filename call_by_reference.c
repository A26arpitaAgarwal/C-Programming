// Call by reference printing the value 10 times to original

#include <stdio.h>
int call(int *a)
{
    *a = 10 * (*a);
}
int main()
{
    int x = 2;
    printf("The value of variable is %d\n", x);
    call(&x);
    printf("The value after call is %d", x);
    return 0;
}