#include<bits/stdc++.h>
using namespace std;
#define m 100100
int k[m];
int main()
{
    pair<int,int>p;
    int n,f;
    cin>>n>>f;
    int a[n],b[n];
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        ans+=min(a[i],b[i]);
        k[i]=min(a[i]*2,b[i]) -min(a[i],b[i]);
    }
    sort(k+1,k+n+1);
    for(int i=0;i<f;++i)
        ans+=k[n-i];
    cout<<ans<<'\n';

    return 0;

}
