#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[1020], i, n, t=0;
    cin>>n;
    for(i=0; i<1000; i++, t++)
    {
        if(t==n)
            t=0;
        printf("N[%d] = %d\n", i, t);

    }
    return 0;
}

