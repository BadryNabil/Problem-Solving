#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,h ,x,i,out=0;
    scanf("%d %d ",&n, &h);
    for(i=0;i<n;i++)
    {
        scanf("%d", &x);
        if(x>h)
        {
            out+=2;
        }
        else
            out++;
    }
    printf("%d",out);

return 0;
}
