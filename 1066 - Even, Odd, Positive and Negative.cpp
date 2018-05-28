#include <iostream>
 
using namespace std;
 
int main() {
 
       int a;
    int n=0, p=0, e=0, o=0;
    for(int i=0; i<5; i++)
    {
        cin>>a;
        if(a<0)
            n++;
        if(a>0)
            p++;
        if(a%2==0)
            e++;
        if(a%2==1||a%2==-1)
            o++;
    }
    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<n<<" valor(es) negativo(s)"<<endl;
 
    return 0;
}