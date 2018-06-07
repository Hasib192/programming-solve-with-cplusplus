#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[120], i, n;
    double x, y;

    cin>>x;

    y=x;
    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n", i, y);
        y=y/2;
    }
    return 0;
}
