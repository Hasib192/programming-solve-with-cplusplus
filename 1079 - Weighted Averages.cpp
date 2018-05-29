#include <iostream>
 #include<cstdio>
using namespace std;
 
int main() {
 
   int i;
    int N;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        float d;
        float a, b, c;
        cin>>a; cin>>b; cin>>c;
        d=(a*2+b*3+c*5)/(2+3+5);
        printf("%.1f\n", d);
    }
 
    return 0;
}