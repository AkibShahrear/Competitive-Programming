#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   int cnt=-1;
   if(b%a==0)
   {
       cnt=0;
       int d=b/a;
       while(d%2==0)
       {
           d/=2,cnt++;
       }
       while(d%3==0)
       {
           d/=3,cnt++;
       }
       if(d!=1)
       {
           cnt=-1;
       }
   }
   cout<<cnt<<'\n';
}
