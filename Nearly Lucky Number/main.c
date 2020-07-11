#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num ,x ,count =0;
    scanf("%I64d",&num);
    while(num%10!=num)
    {
        x=num%10;
        if(x==4 || x==7)
        {
            count++;
        }
        num = num/10;
    }
    if(num ==7 || num ==4)
    {
        count++;
    }
    if(count == 4 || count ==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;
}
