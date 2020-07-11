#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,count=0,r=0;
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;

        num=num/10;

        if(r==7)
            count++;
    }
    printf("%d",count);
    return 0;
}
