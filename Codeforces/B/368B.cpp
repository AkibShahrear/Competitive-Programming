#include<bits/stdc++.h>
using namespace std;
int c[100001],r[100002];
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>=1;i--)
    {
        r[i] =r[i+1];
        if(c[a[i]]==0) r[i]++;
        c[a[i]]++;

    }
    while(m--)
    {
        cin>>b;
        cout<<r[b]<<'\n';
    }





}
