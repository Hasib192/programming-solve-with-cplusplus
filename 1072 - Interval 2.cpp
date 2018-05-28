#include <iostream>
 
using namespace std;
 
int main() {
 int i;
    int n;int X;
    cin>>n;
    int y=0;
    int z=0;
    for(i=0; i<n; i++)
    {
        cin>>X;
        if(X>=10 && X<=20)
            y++;
        else
            z++;
    }
    cout<<y<<" in"<<endl;
    cout<<z<<" out"<<endl;
 
    return 0;
}