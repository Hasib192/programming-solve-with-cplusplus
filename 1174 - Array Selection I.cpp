#include <iostream>
 
using namespace std;
int main() {
     double a[100], x;
    int i, pos;
    for(i=0; i<100; i++)
        scanf("%lf", &a[i]);
    for(i=0; i<100; i++)
    {
        if(a[i]<=10)
        {
            x=a[i];
            pos=i;
        }
        else
            continue;
        printf("A[%d] = %.1lf\n", pos, x);
    }
 
    return 0;
}