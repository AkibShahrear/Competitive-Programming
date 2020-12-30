#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int main()
{
    int n,m;
    cin>>n>>m;
    int b[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    int64_t sum = 1LL * n*(n-1)/2;
    for(int i=1;i<=m;i++)
    {
        sum -= 1LL * a[i]*(a[i]-1)/2;
    }
    cout<<sum;
}
