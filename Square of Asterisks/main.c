#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,row=0,col=0;
    scanf("%d",&x);
    for(row=0 ; row <x ; row++)
    {
        for(col=0 ; col<x ; col++)
        {
            if(row==0 || row==x-1)
                printf("*");
            else if (col==0 || col==x-1)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}



