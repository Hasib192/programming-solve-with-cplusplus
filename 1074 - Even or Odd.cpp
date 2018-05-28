#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>N;
        if(N<0 && N%2==-1)
            cout<<"ODD NEGATIVE"<<endl;
        if(N<0 && N%2==0)
            cout<<"EVEN NEGATIVE"<<endl;
        if(N==0)
            cout<<"NULL"<<endl;
        if(N>0 && N%2==1)
            cout<<"ODD POSITIVE"<<endl;
        if(N>0 && N%2==0)
            cout<<"EVEN POSITIVE"<<endl;
        N=0;
    }
 
    return 0;
}