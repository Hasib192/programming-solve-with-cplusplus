#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
 
float x1, y1;
    float x2, y2;

    float d;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("%.4f\n", d);
 
    return 0;
}