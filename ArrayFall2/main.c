#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[1000],i,k,l=0;
    scanf("%d",&i);
    for(k=0; k<1000; k++)
    {
        printf("N[%d] = %d\n",k,l);
        l++;
        if(l==i)
        l=0;
    }
    return 0;
}

