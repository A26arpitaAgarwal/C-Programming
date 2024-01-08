// Implementation of 2D Array

#include <stdio.h>
int main()
{
    int students = 3;
    int sub = 5;
    int marks[3][5];

    printf("Enter the marks of 3 students each of 5 subjects: \n");
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("The arrays is : \n");

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}