#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, al=0, gas=0, di=0;
    while(cin>>a)
    {
        if(a==4)
            break;
        if(a==1)
            al++;
        if(a==2)
            gas++;
        if(a==3)
            di++;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<di<<endl;
    return 0;
}