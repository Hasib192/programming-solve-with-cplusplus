#include <iostream>
 
using namespace std;
 
int main() {
 
  int a, i;
    int n, sum=0;
    cin>>a;
    while(cin>>n)
    {
        if(n>0)
            break;
    }
    for(i=0; i<n; i++)
    {
        sum += a+i;
    }
    cout<<sum<<endl;
 
    return 0;
}