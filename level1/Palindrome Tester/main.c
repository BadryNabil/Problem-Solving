#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,num2=0,r=0,original;
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        r=num%10;
        num2=num2*10+r;
        num=num/10;
    }

    if(num2==original)
    {
        printf("The Number is palindrome");
    }
    else
    {

        printf("The Number is Not palindrome");
    }
    return 0;
}
