#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[4], i;

    for(i=0; i<4; i++)
    {
        cin>>array[i];
    }

    sort(array, array+4);

    int b = array[0]+array[1];
    int c = array[1]+array[2];

    if(b>array[2]||c>array[3])
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
