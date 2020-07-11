#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,j;
    for(i=1 ; i<=5 ;i++)
    {
        scanf("%d",&num);

        for(j=num ; j>=1 ;j--)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
/*
#include <stdio.h>


int main()
{
    int a, b, c, d, e;
    int count;

    printf("Enter five numbers separated by spaces: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    for(count = 0; count < a; count++)
        printf("*");

    printf("\n");

    for(count = 0; count < b; count++)
        printf("*");

    printf("\n");

    for(count = 0; count < c; count++)
        printf("*");

    printf("\n");


    for(count = 0; count < d; count++)
        printf("*");

    printf("\n");

    for(count = 0; count < e; count++)
        printf("*");

    printf("\n");

    return 0;
}

*/
