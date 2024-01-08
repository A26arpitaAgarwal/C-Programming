// Structures in c programming
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};
int main()
{
    struct employee e1;
    printf("Enter the value of code: ");
    scanf("%d", &e1.code);

    printf("Enter the value of salary: ");
    scanf("%f", &e1.salary);
    fflush(stdin);
    printf("Enter the value of name: ");
    gets(e1.name);

    // Another way to initialise the structure
    struct employee Rohit = {101, "Rohit", 234.76};
    printf("Code is: %d \n", Rohit.code);
    printf("Salary is: %f \n", Rohit.salary);
    printf("Name is: %s\n ", Rohit.name);

    return 0;
}