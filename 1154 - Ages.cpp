#include <iostream>
 
using namespace std;
 
int main() {
 
      int a, i, sum=0;
    double count=0.0, avg;
     while(cin>>a && a>0)
     {
         sum+=a;
         count++;
     }
     avg=sum/count;
     printf("%.2lf\n", avg);
 
    return 0;
}