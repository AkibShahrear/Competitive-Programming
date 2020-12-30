#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
      if(a<b)
      {
          cout<<b-a<<'\n';
      }
      else{
        cout<<(a-b)%2<<'\n';
      }

    }
}
