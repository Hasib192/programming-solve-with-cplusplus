#include<bits/stdc++.h>
using namespace std;
#define max 10
int main()
{
   char a[10];
   int i, t;
   scanf("%d", &t);
   for(i=0; i<t; i++)
   {
       scanf("%s", a);
       int l=strlen(a);
       if(l==5)
        printf("3\n");
       else if(a[0]=='t'&&a[1]=='w'||a[1]=='w'&&a[2]=='o'||a[0]=='t'&&a[2]=='o')
            printf("2\n");
       else
        printf("1\n");
   }
   return 0;
}
