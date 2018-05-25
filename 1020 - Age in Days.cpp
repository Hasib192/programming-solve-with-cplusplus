#include <iostream>
 
using namespace std;
 
int main() {
 
       int N;
    cin>>N;

    int y;
    y=N/365;

    int m;
    m=(N%365)/30;

    int d;
    d=((N%365)%30)%30;

    cout<<y<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<d<<" dia(s)"<<endl;
 
    return 0;
}