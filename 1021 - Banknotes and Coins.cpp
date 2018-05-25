#include<bits/stdc++.h>
using namespace std;

int main()

{
    double a;
    cin>>a;

    double f, i;

    f=modf(a, &i);

    int e = i;

    int g = f*100;

    cout<<"NOTAS:"<<endl;
    printf("%d nota(s) de R$ 100.00\n", e/100);
    printf("%d nota(s) de R$ 50.00\n", (((e%100)/50)));
    printf("%d nota(s) de R$ 20.00\n", ((e%100)%50)/20);
    printf("%d nota(s) de R$ 10.00\n", (((e%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5.00\n", ((((e%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2.00\n", (((((e%100)%50)%20)%10)%5)/2);


    cout<<"MOEDAS:"<<endl;
    printf("%d moeda(s) de R$ 1.00\n", ((((((e%100)%50)%20)%10)%5)%2)/1);
    printf("%d moeda(s) de R$ 0.50\n", (g%100)/50);
    printf("%d moeda(s) de R$ 0.25\n", ((g%100)%50)/25);
    printf("%d moeda(s) de R$ 0.10\n", (((g%100)%50)%25)/10);
    printf("%d moeda(s) de R$ 0.05\n", ((((g%100)%50)%25)%10)/5);
    printf("%d moeda(s) de R$ 0.01\n", (((((g%100)%50)%25)%10)%5)/1);
    
    return 0;

}
