#include <iostream>
 
using namespace std;
 
int main() {
 
     int a;
    while(cin>>a)
    {
        for(int i=0; i<(a*4);i=i+4)
            cout<<i+1<<" "<<i+2<<" "<<i+3<<" "<<"PUM"<<endl;
    }
 
    return 0;
}