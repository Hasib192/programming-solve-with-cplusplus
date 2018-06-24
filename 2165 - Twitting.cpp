#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000];
    int count=0, i=0;
    gets(ch);
    while(ch[i]!= NULL)
    {
        count++;
        i++;
    }
    if(count<=140)
        cout<<"TWEET"<<endl;
    else
        cout<<"MUTE"<<endl;

    return 0;
}