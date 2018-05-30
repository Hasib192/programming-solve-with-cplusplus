#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    int i, x, y, j, sum=0;
    for(i=0; i<N; i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            swap(x,y);
        }
        for(j=x+1; j<y; j++)
        {
            if(j%2==1)
            {
                sum+=j;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}