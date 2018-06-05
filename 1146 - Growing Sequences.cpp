#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    while(cin>>n && n!=0)
    {
        for(i=1; i<=n; i++)
        {
            if(i==n)
                cout<<i<<endl;
            else
                cout<<i<<" ";
        }
    }
    return 0;
}
