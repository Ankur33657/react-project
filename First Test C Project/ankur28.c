#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int c, d;
    int x = 0, y = 0, i = 0;
    char a;
    printf("Enter your name??\n");
    scanf("%s", &a);
    printf("Welcome to the world of o for rock, 1 for papper and 2 for scissor game..\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your option..\n ");
        scanf("%d", &c);
        srand(time(NULL));
        int d = rand() % 3;
        printf("The computer option is %d\n", rand() % 3);
        {
            if (c == 0 && d == 1)
            {
                printf("computer win the game\n");
                y++;
            }
            else if (c == 0 && d == 2)
            {
                printf("%s is winner\n", a);
                x++;
            }
            else if (c == 1 && d == 0)
            {
                printf("%s is winner\n", a);
                x++;
            }
            else if (c == 1 && d == 2)
            {
                printf("computer win the game\n");
                y++;
            }
            else if (c == 2 && d == 1)
                {
                    printf("%s is winner\n ", a);
                    x++;
                }
                else if (c == 2 && d == 0)
                {
                    printf("computer winner of the round\n");
                    y++;
                }
                else
                {
                    printf(" match draw\n");
                }
            }
        }
        if (x > y)
        {
            printf("%s is the winner of the game and score is %d\n", a, x);
        }
        else if (x < y)
        {
            printf("computer is winner of the game and scored %d\n", y);
        }
        else
        {
            printf("match draw... better luck get winner next time\n");
        }
    }
