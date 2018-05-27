#include <iostream>
 
using namespace std;
 
int main() {
     double salary, b;
    cin>>salary;
    if(salary<=400)
    {
        b=salary*.15;
        salary+=b;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n", b);
        printf("Em percentual: 15 %\n");
    }
   else  if(salary>400 && salary<=800)
    {
        b=salary*.12;
        salary+=b;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n", b);
        printf("Em percentual: 12 %\n");
    }
   else if(salary>800 && salary<=1200)
    {
        b=salary*.10;
        salary+=b;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n", b);
        printf("Em percentual: 10 %\n");
    }
    else if(salary>1200 && salary<=2000)
    {
        b=salary*.07;
        salary+=b;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n", b);
        printf("Em percentual: 7 %\n");
    }
    else if(salary>2000)
    {
        b=salary*.04;
        salary+=b;
        printf("Novo salario: %.2lf\n",salary);
        printf("Reajuste ganho: %.2lf\n", b);
        printf("Em percentual: 4 %\n");
    }
 
    return 0;
}