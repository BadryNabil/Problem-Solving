#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w1,w2,result1=0,result2=0,count=0;

    scanf("%d %d",&w1,&w2);
   while(w1<=w2)
    {
        w1=w1*3;
        w2=w2*2;
        count++;
    }
    printf("%d",count);
    return 0;
}
