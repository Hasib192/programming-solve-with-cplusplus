#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, c, a[1000];
    int i;
    double avg, m, n;
    cin>>c;
    while(c--)
    {
        int sum=0;
        cin>>t;
        for(i=0; i<t; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        avg=(float)sum/t;
        int count=0;
        for(i=0; i<t; i++)
        {
            if(avg<a[i])
                count++;

        }
        m=(float)count/t;
        printf("%.3lf", m*100);
        cout<<"%"<<endl;

    }
    return 0;
}
