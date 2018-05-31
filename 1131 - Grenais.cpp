#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, n;
    int inter=0, gremio=0, empates=0, count=0;
    while(cin>>x>>y)
    {
        count++;
        if(x>y)
            inter++;
        if(x<y)
            gremio++;
        if(x==y)
            empates++;

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
        if(n==1)
            continue;
        else if(n==2)
            break;
    }
    printf("%d grenais\n", count);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if(inter>gremio)
        cout<<"Inter venceu mais"<<endl;
    if(inter<gremio)
        cout<<"Gremio venceu mais"<<endl;
    if(inter==gremio)
        cout<<"Não houve vencedor"<<endl;
    return 0;

}
