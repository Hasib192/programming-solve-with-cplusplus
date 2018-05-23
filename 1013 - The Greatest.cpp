#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int d,e;
    d=(a+b+abs(a-b))/2;
    e=(d+c+abs(d-c))/2;

    printf("%d eh o maior\n", e);
 
    return 0;
}