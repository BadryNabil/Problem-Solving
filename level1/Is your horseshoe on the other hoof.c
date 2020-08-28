#include <stdio.h>
int main()
{
   long long int arr[4],i,j,count=0;
    for(i=0;i<4;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
           if(arr[i]==arr[j])
           {
                count++;

           }
        }
   }
   // it,s mean is the 4 num is same
   if(count==6)
   {
       count/=2;
   }
   else if(count==3)
   {
       count=2;
   }

    printf("%d",count);
    return 0;
}
