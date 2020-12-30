#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int s=0,e=0,ps,pe;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            s++;


        }
        else{
            e++;

        }
    }
    int cnt=0;
   for(int i=1;i<=k;i++)
   {
       int c=0,c1=0;
       if(a[i]==1)c++;else c1++;
       for(int j=i+k;j<=n;j+=k)if(a[j]==1)c++; else c1++;
       cnt = max(cnt,abs(s-c-e+c1));

   }
   cout<<cnt;
}
