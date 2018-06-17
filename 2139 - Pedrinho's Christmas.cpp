#include<bits/stdc++.h>
using namespace std;

int main()
{
    int month, day;
    while(cin>>month>>day)
    {
        int sum=0;
        if(month==12 && day==25)
            cout<<"E natal!"<<endl;
        else if(month==12 && day==24)
            cout<<"E vespera de natal!"<<endl;
        else if(month==12 && day>=25)
            cout<<"Ja passou!"<<endl;
        else if(month<12)
        {
            for(int i=month; i<=12; i++)
            {
                if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                    sum=sum+31;
                 else if(i==2)
                    sum+=29;
                 else
                        sum=sum+30;
            }
            printf("Faltam %d dias para o natal!\n", sum-(6+day));
        }
    }
    return 0;
}
