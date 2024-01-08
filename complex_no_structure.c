// Complex number input via structures and array

#include <stdio.h>
#include <string.h>
typedef struct complex
{
    int real;
    int imaginary;
} cmp;

void display(cmp c)
{
    printf("The value of real part is %d\n", c.real);
    printf("The value of imaginary part is %d\n", c.imaginary);
}
int main()
{
    cmp c_no[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the real value of %d: ", i + 1);
        scanf("%d", &c_no[i].real);

        printf("Enter the imaginary value of %d: ", i + 1);
        scanf("%d", &c_no[i].imaginary);
    }

    for (int i = 0; i < 2; i++)
    {
        display(c_no[i]);
    }
}
