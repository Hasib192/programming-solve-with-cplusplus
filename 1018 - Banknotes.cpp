#include <iostream>
 
using namespace std;
 
int main() {
 
       long long int i;
    cin>>i;
    cout<<i<<endl;
    int p;
    p=i/100; cout<<p<<" nota(s) de R$ 100,00"<<endl;
    int q;
    q=(i%100)/50; cout<<q<<" nota(s) de R$ 50,00"<<endl;
    int r;
    r=((i%100)%50)/20; cout<<r<<" nota(s) de R$ 20,00"<<endl;
    int s;
    s=(((i%100)%50)%20)/10; cout<<s<<" nota(s) de R$ 10,00"<<endl;
    int t;
    t=((((i%100)%50)%20))/5; cout<<t<<" nota(s) de R$ 5,00"<<endl;
    int u;
    u=(((((i%100)%50)%20)%5))/2; cout<<u<<" nota(s) de R$ 2,00"<<endl;
    int v;
    v=(((((i%100)%50)%20)%5)%2)/1; cout<<v<<" nota(s) de R$ 1,00"<<endl;
 
    return 0;
}