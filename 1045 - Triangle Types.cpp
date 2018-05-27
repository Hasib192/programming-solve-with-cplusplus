#include<bits/stdc++.h>
using namespace std;
int main() {


   double a, b, c;

   cin>>a>>b>>c;
   {
   if(a<b)
   {
       swap(a, b);
   }
   if(a<c)
   {
       swap(a,c);
   }
   if(b<c)
   {
       swap(b,c);
   }
   //cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    if(a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else if((a*a)==(b*b)+(c*c))
        cout<<"TRIANGULO RETANGULO"<<endl;
    else if((a*a)>(b*b+c*c))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if((a*a)<(b*b+c*c))
        cout<<"TRIANGULO ACUTANGULO"<<endl;

    if(a==b && a==c && b==c)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else if(a==b||b==c)
        cout<<"TRIANGULO ISOSCELES"<<endl;
}
}
