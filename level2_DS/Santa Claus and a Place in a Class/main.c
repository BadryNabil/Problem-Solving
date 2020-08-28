#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int i,a[5],cnt=0;
    for(i=0;i<4;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+4);
    for(i=0;i<3;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    printf("%lld\n",cnt);
    return 0;
}
