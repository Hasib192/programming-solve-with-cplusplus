#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    double A, B, C, s, area;
    scanf("%lf %lf %lf", &A, &B, &C);
    if((A+B>C)&&(A+C>B)&&(B+C>A))
        {
            area=(A+B+C);
            printf("Perimetro = %.1f\n", area);
        }
    else
        {
            area=((A+B)*C)/2;
            printf("Area = %.1lf\n", area);
        }
 
    return 0;
}