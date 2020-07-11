#include <stdio.h>
#include <stdlib.h>
#include<time.h>

enum Status {CONTINUE, LOSE,WIN};
int rollDice();
int main()
{
    enum Status gameStatus;
    int mypoint;
    int sum;
    srand(time(NULL));
    sum = rollDice();
    switch(sum)
    {
       case 7 :
       case 11 :
        gameStatus = WIN;
        break;

       case 2:
       case 3:
       case 12:
        gameStatus = LOSE;
        break;

       default:
        gameStatus = CONTINUE;
        mypoint = sum;
        printf("Point is %d\n",mypoint);
        break;
    }

    while(gameStatus == CONTINUE)
    {
        sum = rollDice();
        if (sum == mypoint)
        {
            gameStatus = WIN;
        }
        else if ( sum == 7)
        {
            gameStatus = LOSE;
        }

    }
    if (gameStatus == WIN)
    {
        puts("The Player Is Win");
    }
    else
    {
        puts("The Player Is Lose");
    }


    return 0;
}
int rollDice()
{
    int die1,die2,sumgame;
    die1=1+(rand()%6);
    die2=1+(rand()%6);
    sumgame=die1+die2;
    printf("Player rolled %d + %d = %d\n",die1, die2,sumgame);
    return sumgame;
}
