#include <iostream>
#include<cstring>
using namespace std;

int main() {

    char input1[100], input2[100], input3[100];
    cin>>input1;
    cin>>input2;
    cin>>input3;
    if(strcmp(input1,"vertebrado")==0)
    {
        {
        if(strcmp(input2,"ave")==0)
        {
            if(strcmp(input3,"carnivoro")==0)
                cout<<"aguia"<<endl;
            if(strcmp(input3,"onivoro")==0)
                cout<<"pomba"<<endl;
        }
        if(strcmp(input2,"mamifero")==0)
        {
            if(strcmp(input3,"onivoro")==0)
            {
                cout<<"homem"<<endl;
            }
            if(strcmp(input3,"herbivoro")==0)
                cout<<"vaca"<<endl;
        }
    }
    }
    if(strcmp(input1,"invertebrado")==0)//if(ch=='')
    {
        if(strcmp(input2,"inseto")==0)
        {
            if(strcmp(input3,"hematofago")==0)//if(ch=='')
                cout<<"pulga"<<endl;
            if(strcmp(input3,"herbivoro")==0)//if(ch=='')
                cout<<"lagarta"<<endl;
        }
        if(strcmp(input2,"anelideo")==0)
        {
            if(strcmp(input3,"hematofago")==0) //if(ch=='')
                cout<<"sanguessuga"<<endl;
            if(strcmp(input3,"onivoro")==0)//if(ch=='')
                cout<<"minhoca"<<endl;

        }
                }

    return 0;
}
