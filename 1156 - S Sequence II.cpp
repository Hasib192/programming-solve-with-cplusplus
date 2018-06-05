#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, sum=0, i;
    long long int j=1;
    for(i=1; i<=39; i=i+2)
    {
        a=i/(float)j;
        sum+=a;
        j=j+j;

    }
    printf("%.2lf\n", sum);
    return 0;
}
