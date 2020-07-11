#include <stdio.h>
#include <stdlib.h>
//https://www.urionlinejudge.com.br/judge/en/problems/view/2167
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0 ; i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }



        for(i=1 ; i<n ;i++)
        {

           if(arr[i] > arr[i+1])

                printf("%d",i+1);
                break;
            }



    return 0;
}
