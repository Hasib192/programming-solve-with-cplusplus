#include <iostream>
 
using namespace std;
 
int main() {
 
       int X;
    int i, N;int c=0;
    cin>>N;
    int j=0;
    while(j<N)
    {
        cin>>X;
    for(i=1; i<=X; i++)
    {
        if(X%i==0)
            c++;
    }
    if(c==2)
        cout<<X<<" eh primo"<<endl;
    else
        cout<<X<<" nao eh primo"<<endl;
    j++;
    c=0;
    }
 
    return 0;
}