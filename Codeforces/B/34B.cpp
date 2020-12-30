#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    int sum=0;
     for(int i=0;i<m;i++)
    {

        if(a[i]<0)
        {
            sum+=a[i];
        }
        //cout<<a[i]<<'\n';

    }
    cout<<abs(sum)<<'\n';
}
