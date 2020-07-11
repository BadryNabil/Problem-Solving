#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,j;
    double arr[12][12],sum=0.0;
    char o[2];
    scanf("%d %s",&l,&o);

    for(i=0 ; i<=11 ; i++)
    {
        for(j=0 ; j<=11 ; j++)
        {
            scanf("%lf",&arr[i][j]);

        }
    }
    for(i=0 ; i<=11 ; i++)
    {
        sum+=arr[l][i];
    }
    if(o[0]=='S')
    {
        printf("%0.1lf",sum);
    }

    else if(o[0]=='M')
    {
        printf("%.1lf\n",sum/12.0);
    }
    return 0;
}
