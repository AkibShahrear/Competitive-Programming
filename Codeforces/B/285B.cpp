#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int a[n+1],b[n+1],c[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    for(int c=0;c<n+10;++c)
    {
        if(s==t)
        {
            cout<<c;
            return 0;
        }
        s=a[s];
        cout<<"s: "<<s<<'\n';
    }
    puts("-1");
}

