#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int code1, product1, code2, product2;
    float price1, price2;
    double value;
    scanf("%d %d %f", &code1, &product1, &price1);
    scanf("%d %d %f", &code2, &product2, &price2);
    value=(product1*price1)+(product2*price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", value);
 
    return 0;
}