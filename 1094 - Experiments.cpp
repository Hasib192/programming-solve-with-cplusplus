#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, i, count=0,count_c=0, count_r=0, count_s=0, x;
  char ch, r, s, c;
  float percantage_c=0, percantage_r=0, percantage_s=0;
  cin>>n;
  for(i=0; i<n; i++)
  {
      cin>>x>>ch;
      if(ch=='C')
      {
        count_c+=x;
        count+=x;
      }
      if(ch=='R')
      {
        count_r+=x;
        count+=x;
      }
      if(ch=='S')
      {
          count_s+=x;
          count+=x;
      }

  }
  percantage_c=(float)count_c/(float)count;//cout<<count_c<<"\t"<<count<<"\t"<<percantage_c<<endl;
  percantage_r=(float)count_r/(float)count;
  percantage_s=(float)count_s/(float)count;
  printf("Total: %d cobaias\n", count);
  printf("Total de coelhos: %d\n", count_c);
  printf("Total de ratos: %d\n", count_r);
  printf("Total de sapos: %d\n", count_s);
  printf("Percentual de coelhos: %.2f ", percantage_c*100);cout<<"%"<<endl;
  printf("Percentual de ratos: %.2f ", percantage_r*100);cout<<"%"<<endl;
  printf("Percentual de sapos: %.2f ", percantage_s*100);cout<<"%"<<endl;
  
  return 0;
}
