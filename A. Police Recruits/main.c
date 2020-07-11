#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
    }

    for(i=0;i<n;i++)
    {
        if(i<0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
