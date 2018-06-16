#include <iostream>
 
using namespace std;
 
int main() {
 
       int t;
    int a, b, c, d, e, count_a, count_b, count_c, count_d, count, count_e;
    cin>>t;


        cin>>a>>b>>c>>d>>e;
        count_a=0, count_b=0, count_c=0, count_d=0, count=0, count_e=0;
        if(t==a)
            count_a++;
        if(t==b)
            count_b++;
        if(t==c)
            count_c++;
        if(t==d)
            count_d++;
        if(t==e)
            count_e++;
        count=count_a+count_b+count_c+count_d+count_e;
        cout<<count<<endl;
 
    return 0;
}