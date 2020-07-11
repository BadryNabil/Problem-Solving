#include <stdio.h>
#define SIZE 10

void BubbleSort(int *const a,int SIZE);
void SWAP(int *ptr1,int *ptr2);
int main()
{
    int a[SIZE] ={2,5,3,9,7,4,1,0,6,8},i;
    printf("THE ORIGINAL ARRAY !\n");
    for(i=0 ; i<SIZE ;i++)
    {
        printf("%4d",a[i]);
    }
    BubbleSort(a,SIZE);
    printf("THE SORTED ARRAY !\n");
    for(i=0 ; i<SIZE ;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
void BubbleSort(int *const a,int SIZE)
{
    int i,j;
    for (i=0 ; i<SIZE ;i++){
       for (j=0 ; j<SIZE ;j++){
        if(a[j] > a[j+1])
        {
            SWAP(&a[j],&a[j+1]);
        }
      }
   }
}

void SWAP(int *ptr1,int *ptr2)
{
   int  hold  = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = hold;
}
