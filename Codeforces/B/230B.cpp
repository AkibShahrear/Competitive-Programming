#include<bits/stdc++.h>
using namespace std;
const int l=1000010;
int n,p[l],f[l];

int main()
{
for(int i=2;i<l;i++) if(!f[i])
{
    p[i]=true;//prime
    for(int j=2;i*j<l;j++) f[i*j] = true;
}
cin>>n;
for(int i=1;i<=n;i++)
{
    long long a,b;
    cin>>a;
    b=sqrt(a);
    if(b*b==a && p[b])
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}


return 0;
}



