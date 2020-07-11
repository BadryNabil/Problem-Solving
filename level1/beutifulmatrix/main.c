#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5],i,j,res1=0,res2=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                if(i<2)
                {
                   res1=2-i;
                }
                else {
                    res1=i-2;
                }

                if(j<2)
                {
                    res2=2-j;
                }
                else{
                    res2=j-2;
                }
            }

        }
    }
    printf("%d",res1+res2);
    return 0;
}
