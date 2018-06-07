#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    long long fact1, fact2, i, j, sum;
    while(cin>>m>>n)
    {
        fact1=1, fact2=1, sum=0;
        for(i=1; i<=m; i++)
        {
            fact1 =fact1*i;
        }
        for(j=1; j<=n; j++)
        {
            fact2 =fact2*j;
        }
        sum=fact1+fact2;
        cout<<sum<<endl;
    }
    return 0;

}
