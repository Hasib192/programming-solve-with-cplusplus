#include <iostream>
 
using namespace std;
 
int main() {
  long q;
    int v, count_1=0, count_0=0;
    float x;
    cin>>q;
    x=(float)q/2;
    while(q--)
    {
        cin>>v;
        if(v==1)
            count_1++;
        else
            count_0++;
    }


    if(x<=count_1)
        cout<<"N"<<endl;
    else
        cout<<"Y"<<endl;
 
    return 0;
}