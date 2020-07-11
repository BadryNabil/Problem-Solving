#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,row,col;
    for(row=1 ; row <=8 ; row++)
    {
        for(col=1 ; col<=8 ; col++)
        {
                if(row%2==0)
                {
                    printf(" ");
                    printf("*");
                }
                else
                printf("* ");


        }
        printf("\n");
    }
    return 0;
}



