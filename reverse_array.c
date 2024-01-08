// REVERSING THE ARRAY
#include <stdio.h>
int reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    reverse(arr, n);
    printf("The reversed array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}