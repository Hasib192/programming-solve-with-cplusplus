#include <iostream>
 
using namespace std;
 
int main() {
 
       int t, count_0=0, count_1=0, i, count;

    while(true)
    {
        cin>>t;
        if(t==0)
            break;
        while(t--)
        {
            cin>>count;
            if(count==0)
                count_0++;
            else
                count_1++;
        }
        printf("Mary won %d times and John won %d times\n", count_0, count_1);
        count_0=0, count_1=0;
    }
 
    return 0;
}