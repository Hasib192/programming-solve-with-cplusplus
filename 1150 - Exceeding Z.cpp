#include <iostream>
 
using namespace std;
 
int main() {
 
     int x, z, sum=0, count=0, i;

    cin>>x;

    while(true)
    {
        cin>>z;
        if(x<z)
            break;
    }

    for(i=x; i<z; i++)
    {
        sum+=i;
        count++;
        if(sum>z)
            break;
    }
    cout<<count<<endl;
 
    return 0;
}