#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,n,i,ar[1000];
    cin>>n;
    ar[0]=0;
    ar[1]=1;
    for(i = 2;i < n;i++){
        ar[i] = ar[i-2] + ar[i-1];
    }
    printf("0");
    for(j = 1;j < n;j++){
        printf(" %d",ar[j]);
    }
    printf("\n");
    return 0;
}
