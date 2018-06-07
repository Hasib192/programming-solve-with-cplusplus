#include <iostream>
 
using namespace std;
 
int main() {
 
      int i, t, x;
    while(cin>>x)
    {
        int sum=0, count=0;
        if(x==0)
            break;
        else
        {
            for(i=x; true; i++)
            {
            if(i%2==0)
            {
                sum+=i;
                count++;
                if(count==5)
                    break;
            }
            }
            cout<<sum<<endl;

        }
    }
 
    return 0;
}