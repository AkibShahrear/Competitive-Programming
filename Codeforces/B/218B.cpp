#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1010];
int  main()
{
    int n,m;
    cin>>n>>m;
    int t=n;
    int sum=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+m);
    int k=n;
    int mn=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<a[i];j++)
    {
        if(k>0)
        {
            mn+=a[i]-j;
            k--;
        }
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        int j=max_element(a,a+m)-a;

        mx+=a[j];
        a[j]--;
    }
    cout<<mx<<" "<<mn<<'\n';
    return 0;
}


