#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    long long mx=a[0],q=b[0];
    for(int i=0;i<n;i++)
    {
      mx=max(mx,a[i]);
      q=min(q,b[i]);
    }

     cout<<max((mx-q),0LL)<<'\n';
}
}
