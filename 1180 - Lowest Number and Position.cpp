#include <iostream>
 
using namespace std;
 
int main() {
 
        int n, x[1000], large=9999, pos=0, i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(i=0; i<n; i++)
    {
        if(x[i]<large)
        {
            large=x[i];
            pos=i;
        }

    }
    cout<<"Menor valor: "<<large<<endl;
    cout<<"Posicao: "<<pos<<endl;
 
    return 0;
}