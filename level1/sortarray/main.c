#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp;
    n=4;
    int arr[]= {1,3,4,5};
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++)

    {
        printf("%d",arr[i]);
    }
    return 0;
}
