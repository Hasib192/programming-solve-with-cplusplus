#include <iostream>
 
using namespace std;
 
int main() {
 
  int a[10];
    int i;
    for(i=0; i<10; i++)
        cin>>a[i];
    for(i=0; i<10; i++)
    {

        if(a[i]==0||a[i]<0)
           printf("X[%d] = 1\n", i);
        else
        printf("X[%d] = %d\n", i, a[i]);
    }
    return 0;
}