// GENERATE RANDOM NUMBER
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    // int number = rand(); // any random number
    int number = rand() % 100 + 1; // generate between 1 to 100
    printf("number is : %d", number);
    return 0;
}