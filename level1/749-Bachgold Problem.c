#include<stdio.h>
int main()
{
   int num ,i;
   scanf("%d",&num);
   printf("%d\n",num/2);
   if(num%2 == 0)
   {
       for(i=0 ; i<num/2-1 ; i++)
       {
           printf("2 ");
       }
        printf("2\n");
   }
   else
        {
        for(i=0 ; i<num/2-1 ; i++)
        {
           printf("2 ");
        }
        printf("3\n");
        }
    return 0;
}