// GUESS THE NUMBER
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, nguess = 1;
    srand(time(0));
    int number = rand() % 100 + 1; // generate between 1 to 100

    // keep the loop running until the number is not guessed
    printf("Guess the number between 1 to 100\n");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guesses it right!! The number is %d.\n", number);
            printf("You done it in %d guesses.", nguess);
        }
        nguess++;

    } while (guess != number);
    return 0;
}