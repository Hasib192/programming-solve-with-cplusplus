#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    double value=0.0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        if(t==0)
        {
            value=1;
            break;
        }
        else
        {
            value=value+2;
            value=1/value;
        }
    }
    cout<<fixed<<setprecision(10)<<value+1<<endl;
    return 0;
}
