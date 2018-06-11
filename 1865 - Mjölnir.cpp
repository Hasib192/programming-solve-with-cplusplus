#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a;
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>n;
        cin.ignore();

        if(a=="Thor")
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}