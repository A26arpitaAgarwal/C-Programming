// SNAKE WATER GUN GAME
#include <stdio.h>
int SnakeWaterGun(char user, char comp)
{
    if (user == comp)
    {
        printf("Match draw!\n");
    }
    else if (user == 's' && comp == 'w')
    {
        printf("Congratulations You Won!\n");
    }
    else if (user == 'w' && comp == 's')
    {
        printf("Better luck next time!\n");
    }
    else if (user == 's' && comp == 'g')
    {
        printf("Better luck next time !\n");
    }
    else if (user == 'g' && comp == 's')
    {
        printf("Congratulations You Won!\n");
    }
    else if (user == 'w' && comp == 'g')
    {
        printf("Congratulations You Won!\n");
    }
    else if (user == 'g' && comp == 'w')
    {
        printf("Better luck next time!\n");
    }
}
int main()
{
    char user, comp;
    comp = 's';
    printf("Enter your choice: s for snake, w for water, and g for gun: ");
    scanf("%c", &user);
    printf("You choose %c and computer choose %c\n", user, comp);
    int result = SnakeWaterGun(user, comp);
    return 0;
}