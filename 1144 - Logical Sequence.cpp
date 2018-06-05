#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin>>m;
    for(int i=1; i<=(m); i++)
    {
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
    }

    //cout<<"Hi";
    return 0;
}