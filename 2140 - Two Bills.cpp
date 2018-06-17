#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[]={2,5,10,20,50,100};
    long long n, m;
    while(cin>>n>>m && m!=0 && n!=0)
    {
        int flag=0;
        long long p=m-n;
        int sum=0;
        for(int i=0; i<6; i++)
        {
            sum=0;
            for(int j=i+1; j<6; j++)
                {
                    sum=array[i]+array[j];
                    //cout<<sum<<endl;
                    if(sum==p)
                    {
                        flag=1;
                        break;
                    }
                }
         }
         if(flag==1)
            cout<<"possible"<<endl;
         else if(flag==0)
            cout<<"impossible"<<endl;
    }
    return 0;
}
