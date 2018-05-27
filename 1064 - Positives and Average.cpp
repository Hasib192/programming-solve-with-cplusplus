#include <iostream>
 
using namespace std;
 
int main() {
 
        double a, store = 0,avg = 0; int i;
    for(i=0; i<6; i++)
    {
        cin>>a;
        //cout<<a<<endl;
        if(a>0)
        {
            store++;
            avg+=a;
            continue;
        }
    }
    cout<<store<<" valores positivos"<<endl;
    cout<<avg/4<<endl;
 
    return 0;
}