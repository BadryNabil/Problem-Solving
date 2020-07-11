#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int pass , i , hold,array[SIZE]={5,7,2,6,1,4,9,5,1,3};
    printf("Array Befor Sorting! = ");
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",array[i]);
    }
    for(pass=1;pass<SIZE-1;pass++)
    {
        for(i=0;i<SIZE;i++)
        {
            if(array[i] > array[i+1])
            {
                hold       = array[i];
                array[i]   = array[i+1];
                array[i+1] = hold;

            }
        }
    }
    puts("\n");
    printf("Array After Sorting! = ");
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
