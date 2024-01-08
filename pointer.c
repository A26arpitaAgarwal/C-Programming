// POINTERS: POINTS TO AN ADDRESS, STORES THE ADDRESS

#include <stdio.h>
int main()
{
    //(int * type pointer)
    int s = 23;
    int *j;
    j = &s;
    // int *j = &s;

    // pointer to pointer (int ** type)
    int **k; //**k is the pointer to pointer and k stores the address of j
    k = &j;

    printf("address of s is %u\n", &s);
    printf("address of s is %u\n", j);
    printf("address of j is %u\n", &j);
    printf("value of s is %d\n", s);
    printf("value of s is %d\n", *(&s));
    printf("value of s is %d\n", *j);

    printf("value of j is %d\n", *k);
    printf("address of j is %d\n", k);

    return 0;
}
