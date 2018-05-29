#include <iostream>
 
using namespace std;
 
int main() {
 
        int i, large=-9999, pos=0;

    int a;

    for(i=1; i<=100; i++)
    {
        cin>>a;
        if(a>large)
            {
                large=a;
                pos=i;
            }

    }
    cout<<large<<endl<<pos<<endl;
    return 0;
}