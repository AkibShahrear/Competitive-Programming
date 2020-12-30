#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long L,a;
    cin>>n>>L>>a;
    long long cnt=0,p=0;
    long long t[n],l[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i]>>l[i];
        cnt+=(t[i]-p)/a;
        p=t[i]+l[i];
    }
   // cout<<"p: "<<p<<'\n';
    cnt+=(L-p)/a;
    cout<<cnt;
}

