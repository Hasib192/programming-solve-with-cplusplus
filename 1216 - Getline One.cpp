#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n;
    int count=0, sum=0;
    while(getline(cin, a)&& cin>>n)
    {
        cin.ignore();
        sum += n;
        count++;
    }
printf("%.1lf\n", (float)sum/(float)count);

return 0;
}

