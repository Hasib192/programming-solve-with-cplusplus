#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i, l;
    int n=0;
    for(i=0; i<6; i++)
    {
        scanf("%f", &l);
        if(l>0)
        n++;
    }
    printf("%d valores positivos\n", n);
}
