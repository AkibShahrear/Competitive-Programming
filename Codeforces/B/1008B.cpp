#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long w[t],h[t];
   for(int i=0;i<t;i++)
   {
       cin>>w[i]>>h[i];
   }
   long long mx=max(w[0],h[0]);

   for(int i=1;i<t;i++)
   {
       if(max(h[i],w[i])<=mx)
       {
           mx=max(h[i],w[i]);
       }
       else if(min(h[i],w[i])<=mx)
       {
           mx=min(h[i],w[i]);
       }
       else{
            cout<<"NO\n";
        return 0;
       }
   }
   cout<<"YES\n";
}
