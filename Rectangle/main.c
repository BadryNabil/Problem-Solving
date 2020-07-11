#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,row=10,col,j;

    for(i=1; i<=10; i++)
    {
        for(j=0; j<10-i; j++)
        {
            printf( "/" );
        }

        for(j=0; j<i; j++ )
        {
            printf( "*" );
        }
        printf( "\n" );

    }
}
    /*
**********
*********
********
*******
******
*****
****
***
**
*

}

//========================================================================================
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;

    for(i=10; i>=1; i--)
    {

        for(j=0; j<i; j++ )
        {
            printf( "*");
        }
        printf( "\n");
    }
        printf( "\n" );


    for(i=10; i>=1; i--)
    {


        for(j=0; j<10-i; j++ )
        {
            printf( " " );
        }

        for(j=0; j<i; j++ )
        {
            printf( "*" );
        }
        printf( "\n" );
    }
        printf( "\n" );


    for(i=1; i<=10; i++)
    {
        for(j=0; j<10-i; j++)
        {
            printf( " " );
        }

        for(j=0; j<i; j++ )
        {
            printf( "*" );
        }
        printf( "\n" );
    }

    return 0;
}
*/

