#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    double A,B, C, d, e,f,g,h, i,j;
    scanf("%lf %lf %lf", &A, &B, &C);
    d=0.5*A*C;
    e=3.14159*C*C;
    f=((A+B)/2)*C;
    g=B*B;
    h=A*B;
    printf("TRIANGULO: %.3lf\n", d);
    printf("CIRCULO: %.3lf\n", e);
    printf("TRAPEZIO: %.3lf\n", f);
    printf("QUADRADO: %.3lf\n", g);
    printf("RETANGULO: %.3lf\n", h);
 
    return 0;
}