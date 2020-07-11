#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[10],i,k;
    scanf("%d",&i);

    for(k=0; k<10; k++)
    {
        printf("N[%d] = %d\n",k,i);
        i=i*2;
    }

    return 0;
}

