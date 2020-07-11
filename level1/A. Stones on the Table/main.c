#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);

     char str[n];
    scanf("%s",str);
    for(i=0;i<=strlen(str)-1;i++)
    {
        if(str[i]==str[i+1])
        {

            count++;
        }
    }
     printf("%d",count);
    return 0;
}
