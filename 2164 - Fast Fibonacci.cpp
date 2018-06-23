#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n, m, a, b;
  cin>>n;



    a=(1+sqrt(5))/2;
    b=(1-sqrt(5))/2;

    m = (pow(a, n)- pow(b, n));

    cout<<fixed<<setprecision(1)<<m/sqrt(5)<<endl;

   return 0;
}
