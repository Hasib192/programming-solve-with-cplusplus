#include<bits/stdc++.h>
using namespace std;

int main()
{
    double i, sum=0, count=0;
    int X;
    while(true)
    {
        level:
        {
        cin>>i;
        if(i>=0.0 && i<=10.0)
        {
            sum+=i;
            count++;
            if(count==2)
            {
                count=0;
                printf("media = %.2lf\n", sum/2);
                sum=0;
                while(X!=1)
                {
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    cin>>X;
                    if(X==2)
                        exit(0);
                    else if(X==1)
                    {
                        X=0;
                         goto level;
                    }

                }
            }
        }
        else
            cout<<"nota invalida"<<endl;

    }
    }
return 0;
}
