#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    char string[100];
    scanf("%d",&n);
    scanf("%s",string);
    if(strlen(string) == n)
    {
        printf("%s",string);
    }
    else
    {
        for(i=0;i<strlen(string);i++)
        {
            printf("%s,%d,%s",string[0],strlen(string)-2,string[strlen(string)-1]);

        }
    }


    return 0;
}
