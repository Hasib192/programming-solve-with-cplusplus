#include <iostream>
 
using namespace std;
int main() {
 
        int N[20];
    int i, temp=0;
    for(i=0; i<20; i++)
        scanf("%d", &N[i]);
    for(i=0; i<20; i++)
    {
        temp=N[i];
        N[i]=N[20-i-1];
        N[20-i-1]=temp;

    }
    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n", i, N[20-i-1]);
    }
 
    return 0;
}