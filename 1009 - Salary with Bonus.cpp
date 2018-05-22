#include<bits/stdc++.h>
using namespace std;
 
int main() {
    char name[50];
    double salary, sold_value, total_salary,a;
    gets(name);

    scanf("%lf %lf", &salary, &sold_value);
    a=sold_value*.15;
    total_salary=salary+a;
    printf("TOTAL = R$ %.2lf\n", total_salary);
    return 0;
}