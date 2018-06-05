#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, sum=0, i;

    for(i=1; i<=100; i++)
    {
        a=1/i;
        sum=sum+a;
    }
    printf("%.2lf\n", sum);
    
    return 0;
}