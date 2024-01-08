// POINTER ARITHMETIC

#include <stdio.h>
int main()
{
    int a = 3, b = 4;
    int *ptr;
    int *ptr2;
    int *ptr3;

    ptr2 = &b;
    ptr3 = &a; // 2 pointers can point to single variable
    ptr = &a;

    printf("The value of ptr is %d and ptr2 is %d\n", ptr, ptr3);

    printf("The value of pointer is %d\n", ptr); // address of a

    ptr++; // adding 1 to pointer

    // showing memory allocation
    printf("The value of pointer now is %d\n", ptr); // address increased by 4 as a integer contain 4 bytes

    // likewise for float 4 bytes and for character 1 byte

    ptr--; // subtracting from pointer
    ptr = ptr - 2;
    printf("The value of pointer now is %d\n", ptr);

    // subtraction of pointer from pointer
    int x = *ptr2 - *ptr;
    printf("%d", x);

    return 0;
}