// Fabonicci series using recursion
#include <stdio.h>
int fabonic(int);
int main()
{
    int n;
    printf("Enter the value of n (no. of terms): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fabonic(i));
    }

    return 0;
}

int fabonic(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fabonic(num - 1) + fabonic(num - 2);
    }
}

/* Fabonic series without recursion
#include <stdio.h>
int main()
{
    int prev_0 = 0, prev_1 = 1, i, n;
    int nextTerm = prev_0 + prev_1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fabonic series: %d %d ", prev_0, prev_1);
    for (i = 3; i <= n; i++)
    {
        printf("%d ", nextTerm);
        prev_0 = prev_1;
        prev_1 = nextTerm;
        nextTerm = prev_0 + prev_1;
    }
    return 0;
} */