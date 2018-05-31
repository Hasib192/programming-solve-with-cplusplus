#include <iostream>
 
using namespace std;
 
int main() {
 
       double a, sum=0;;
    int count=0;

    while(cin>>a)
    {
        if(a>=0 && a<=10)
        {
            count++;
            sum+=a;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }

        if(count==2)
            break;
    }
    printf("media = %.2lf\n", sum/2);
 
    return 0;
}