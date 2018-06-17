#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tab, action;
    string malware;

    cin>>tab>>action;

    int variable=tab;

    while(action--)
    {
        cin>>malware;
        cin.ignore();

        if(malware=="fechou")
            tab++;
        else
            tab--;
    }
    cout<<tab<<endl;

    return 0;
}