#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w,x;
    scanf("%d",&w);

    if(w%2==0)
    {
        if(w==2 || w==0)
        {
             printf("NO");
        }
        else{
            printf("YES");
        }


    }

    else
        printf("NO");

    return 0;
}
