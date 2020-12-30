#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k;
    set<int>s;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)
    {
        if(b[i]==b[i+1])
        {
            b[i+1]=0;
        }
    }
    int p=n-k;
    cout<<b[p+1]<<'\n';
    for(int i=p+1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
        if(b[i]==a[j])
        {
            cout<<j<<" ";
            break;
        }

        }
    }
}
