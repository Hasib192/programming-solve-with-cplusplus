#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, i;
    cin>>n;

    while(n--)
    {
        int sum=0;
        cin>>x>>y;

        if(x%2==0)
            x++;

        for(i=0; i<y; i++)
            {
                sum+=x;
                x=x+2;
            }
         cout<<sum<<endl;
    }
    return 0;
}
