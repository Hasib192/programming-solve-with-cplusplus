#include <iostream>
 
using namespace std;
 
int main() {
 
        int N;int X;
    int sum=0, j=0;
    cin>>N;
    while(j<N)
    {
        cin>>X;
    for(int i=1;i<X; i++)
    {
        if(X%i==0)
            sum+=i;
    }
    if(sum==X)
        cout<<X<<" eh perfeito"<<endl;
    else
        cout<<X<<" nao eh perfeito"<<endl;
        j++;
        sum=0;
    }
 
    return 0;
}