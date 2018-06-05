#include <iostream>
 
using namespace std;
 
int main() {
 
        int N, i, j=1;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        j=j*i;
    }
    cout<<j<<endl;
 
    return 0;
}