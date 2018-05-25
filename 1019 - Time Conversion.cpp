#include <iostream>
 
using namespace std;
 
int main() {
 
      int N;
    cin>>N;
    int h;
    h=N/3600;
    int m;
    m=(N%3600)/60;
    int s;
    s=((N%3600)%60)%60;

    cout<<h<<":"<<m<<":"<<s<<endl;  /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}