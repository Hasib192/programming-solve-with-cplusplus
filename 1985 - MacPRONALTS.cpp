#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, q;
    double s=0, u=0, v=0, w=0, x=0, y=0, z=0, total;
    cin>>n;
    while(n--)
    {
        cin>>c;
        cin>>q;
        if(c==1001)
            s=1.50*q;
        if(c==1002)
            u=2.50*q;
        if(c==1003)
            v=3.50*q;
        if(c==1004)
            w=4.50*q;
        if(c==1005)
            x=5.50*q;
    }
    total = s+ u+ v+ w+ x;

    cout<<fixed<<setprecision(2)<<total<<endl;
    
    return 0;
}
