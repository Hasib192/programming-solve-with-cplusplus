#include <iostream>
 
using namespace std;
 
int main() {
 
       int n, a, b, i, cp1=0, cp2=0;
    while(cin>>n && n!=0)
    {
        cp1=0, cp2=0;
        while(n--)
        {
            cin>>a>>b;
            if(a>b)
                cp1++;
            else if(a<b)
                cp2++;
            if(a==b)
            {
                cp1=cp1;
                cp2=cp2;
            }
        }
        cout<<cp1<<" "<<cp2<<endl;
    }
 
    return 0;
}