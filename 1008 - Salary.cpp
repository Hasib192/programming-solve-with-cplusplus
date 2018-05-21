#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
       int num;
    int hour;
    float amount;
    double c;
    scanf("%d %d", &num, &hour);
    scanf("%f", &amount);
    c=hour*amount;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", c);
 
    return 0;
}