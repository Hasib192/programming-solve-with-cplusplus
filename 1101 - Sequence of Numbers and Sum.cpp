#include <iostream>
 
using namespace std;
 
int main() {
 
  int m, n;
    int sum=0;
    while(cin>>m>>n)
    {
        if(m==0|| n==0 || m<0 || n<0)
            break;
        if(m>n)
    {
        swap(m,n);
    }

    for(int i=m; i<=n; i++)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"Sum="<<sum<<endl;
    sum=0;
    }

    return 0;
}