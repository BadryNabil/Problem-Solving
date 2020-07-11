#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0;
	while(i<100)
    {

        if(i%10==0)
        {
            printf("\n");
        }
        printf("*");
        i++;

    }
	return 0;
}
//for(i=0;i<100;i++)
