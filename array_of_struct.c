// ARRAY OF STRUCTURES
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee facebook[10];
    facebook[0].code = 100;
    facebook[0].salary = 1000.00;
    strcpy(facebook[0].name, "Rohit");

    facebook[1].code = 101;
    facebook[1].salary = 9000.00;
    strcpy(facebook[1].name, "Shubham");
    printf("Done");
    return 0;
}