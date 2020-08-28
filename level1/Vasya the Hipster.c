#include<stdio.h>
int main()
{
	int redSock , blueSock,days;
	scanf("%d%d",&redSock,&blueSock);
    if(redSock > blueSock) 
    {
        days =(redSock - blueSock)/2;
        printf("%d %d",blueSock,days) ;
    }
    else
    {
         days =(blueSock - redSock)/2;
         printf("%d %d",redSock,days) ;
    }
   

	return 0;
}