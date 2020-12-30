#include<bits/stdc++.h>
using namespace std;
long long a[100010],b[100010];
set<long long> s;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+= a[i-1];
        s.insert(a[i]);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
        b[i]+=b[i-1];
        cnt += s.count(b[i]);
    }
    cout<<cnt;
}

