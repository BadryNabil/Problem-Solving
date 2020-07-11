#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int BinarySearch();
void printHeader( void );
void printRow();


int main()
{
    int array[SIZE]={2,4,6,8,10,12,14,16,18,20},key,result;
    printf("Enter The Number Want To Search = ");
    scanf("%d",&key);
    printHeader();
    result=BinarySearch(array,SIZE,key,0,SIZE-1);
     if ( result != -1 )
     {
        printf( "\n%d found in array element %d\n", key, result );
     }
    else
     {
        printf( "\n%d not found\n", key );
     }
}
int BinarySearch(int array[] , int size ,int key , size_t low, size_t high)
{
    int middle;

    while(low<=high)
    {
        middle=(low+high)/2;
        printRow( array, low, middle, high );
        if(key == array[middle])
        {
            return middle;
        }
        else if(key < array[middle])
        {
            high = middle-1;
        }
        else{
            low = middle+1;
        }
    }
    return -1;
}
 void printHeader( void )
 {
     int i;
     puts( "\nSubscripts:" );
     for ( i = 0; i < SIZE; ++i )
     {
          printf( "%3u  ", i );
     }
     puts( "" );
     for ( i = 1; i <= 5 * SIZE; ++i )
     {
         printf("%s", "-" );
     }
      puts( "" );
 }
 void printRow(  int array[], size_t low, size_t mid, size_t high )
 {
     int i;
     for(i=0 ; i<SIZE ; i++)
     {
        if ( i < low || i > high )
          {
             printf("%s", "    " );
          }
        if ( i == mid )
          {
            printf("%3d*",array[i] );
          }
        else{
             printf("%3d  ",array[i] );
        }

     }
      puts( "" );
 }
