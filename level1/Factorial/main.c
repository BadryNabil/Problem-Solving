#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,fact=1;
    scanf("%d",&num);
    while(num!=0)
    {
        fact*=num;
        num--;
    }
    printf("%d",fact);
    return 0;
}
