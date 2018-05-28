#include <iostream>
 
using namespace std;
 
int main() {
 
     int x, y;
    int i;
    int sum=0;

    cin>>x>>y;

    if(x>y)
    {
        swap(x,y);
    }

    for(i=x+1; i<y; i++)
    {
        if(i%2==1 || i%2==-1)
        {
            sum+=i;
        }

    }
    cout<<sum<<endl;
 
    return 0;
}