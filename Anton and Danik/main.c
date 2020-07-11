#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n,i,ant=0,dan=0,len,z;
    scanf("%d\n",&n);
    char string[n];
    gets(string);

    for(i=0;i<=strlen(string)-1;i++)
    {
        if(string[i]=='A')
        {
            ant++;
        }
        else if(string[i]=='D')
        {
            dan++;
        }

    }
    if(ant > dan)
    {
        printf("Anton");
    }
    else if(ant < dan)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }


    return 0;
}
