// Pointers in Structures
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};

void show(struct employee emp)
{
    printf("Code is: %d \n", emp.code);
    printf("Salary is: %f \n", emp.salary);
    printf("Name is: %s\n ", emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 324.90;
    strcpy(ptr->name, "Arpita");
    // Another method -- (*ptr).code = 101;
    show(e1);
}