#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000], l, i, large;
    while(cin>>l)
    {
        large=-1;
        for(i=0; i<l; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<l; i++)
        {
            if(a[i]>large)
                large=a[i];
        }
        if(large<10)
            cout<<"1"<<endl;
        else if(large>=10 && large<20)
                cout<<"2"<<endl;
        else
            cout<<"3"<<endl;

    }
    return 0;
}
