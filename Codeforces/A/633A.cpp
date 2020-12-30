#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool is=0;
   for(int i=0;i<=10000;i++)
    for(int j=0;j<=10000;j++)
   {
       if((a*i)+(b*j)==c)
       {
           is=1;
       }
       if((a*i)+(b*j)>c)
       {
           break;
       }
   }
     if(is)
     {
         cout<<"Yes";
     }
     else{
        cout<<"No";
     }
}
