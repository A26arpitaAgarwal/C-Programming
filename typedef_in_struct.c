// TYPEDEF KEYWORD USED TO DEFINE CUSTOM DATA TYPE
#include <stdio.h>
#include <string.h>

// emp is the custom data type (alias for the data type)

typedef struct employee
{
    int code;
    char name[10];
    float salary;
} emp;

void show(struct employee emp)
{
    printf("Code is: %d \n", emp.code);
    printf("Salary is: %f \n", emp.salary);
    printf("Name is: %s\n ", emp.name);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 324.90;
    strcpy(ptr->name, "Arpita");
    // Another method -- (*ptr).code = 101;
    show(e1);
}