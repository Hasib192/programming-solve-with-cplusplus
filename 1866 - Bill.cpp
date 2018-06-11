#include <iostream>
 
using namespace std;
 
int main() {
 
        int t, a;
    int i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a;
        if(a%2==1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
 
    return 0;
}