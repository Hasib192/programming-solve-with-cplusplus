#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000], i=0;
    int count=0;
    gets(ch);
    while(ch[i]!=NULL)
    {
        count++;
        i++;
    }
    if(count<=80)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}
