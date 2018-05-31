#include<bits/stdc++.h>

using namespace std;

int main()
{
    double x,y;
    int n;
    double k;

    cin>>n;
    int i;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        if(y==0)
            cout<<"divisao impossivel"<<endl;
        else
        {
            k=x/y;
            printf("%.1lf\n", k);
        }

    }


    return 0;

}
