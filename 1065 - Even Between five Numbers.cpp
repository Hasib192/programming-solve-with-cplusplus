#include<bits/stdc++.h>
using namespace std;
 
int main() {
     int a, n, i, l=0;

    for(i=0; i<=4; i++)
    {
         scanf("%d", &a);
        if((a%2)==0)
        {
            l++;
        }
    }
    printf("%d valores pares\n", l);
 
    return 0;
}