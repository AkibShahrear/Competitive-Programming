#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        long long j=s-(a*n);
        int p=j%n;
        long long sum=(a*n)+b;
      if((a*n)==s)
      {
          cout<<"YES\n";
      }
      else if(s>(a*n))
      {
          long long p=s-(a*n);
          if(p<=b && p>=0)
          {
              cout<<"YES\n";
          }
          else{
            cout<<"NO\n";
          }
      }
      else if((a*n)>s)
      {
          int p=s%n;
          if(p<=b && b>=0)
          {
              cout<<"YES\n";
          }
          else{
            cout<<"NO\n";
          }
      }

      else{
        cout<<"NO\n";
      }


    }
}
