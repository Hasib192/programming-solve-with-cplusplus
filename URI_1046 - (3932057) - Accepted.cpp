#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int hi, hr, hf;
    cin>>hi>>hf;
    hr=hf-hi;
    if(hr<0)
        hr=24-hi+hf;
    if(hi==hf)
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    else
        cout<<"O JOGO DUROU"<<" "<<hr<<" HORA(S)"<<endl;
    return 0;
}