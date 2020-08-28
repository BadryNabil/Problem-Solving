#include <stdio.h>
int main()
{
    int num,i,count=0,sum=0;
    scanf("%d",&num);
     int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
        else if(sum>0)
        {
            sum--;
        }
        else
            count++;
    }
    printf("%d",count);

}
