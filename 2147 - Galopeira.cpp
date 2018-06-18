#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    string ch;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>ch;
        double n=ch.length();
        cout<<fixed<<setprecision(2)<<n/100<<endl;
    }
    return 0;
}
