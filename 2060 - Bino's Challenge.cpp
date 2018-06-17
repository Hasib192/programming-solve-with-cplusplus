#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, array[1000], n, count_two=0, count_three=0, count_four=0, count_five=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=0; i<n; i++)
    {
        if(array[i]%2==0)
            count_two++;
        if(array[i]%3==0)
            count_three++;
        if(array[i]%4==0)
            count_four++;
        if(array[i]%5==0)
            count_five++;
    }
    printf("%d Multiplo(s) de 2\n", count_two);
    printf("%d Multiplo(s) de 3\n", count_three);
    printf("%d Multiplo(s) de 4\n", count_four);
    printf("%d Multiplo(s) de 5\n", count_five);
}
