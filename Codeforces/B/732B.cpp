#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        temp+=a[i];
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if((a[i]+a[i+1])<k)
        {
            cnt+=(k-a[i])-a[i+1];
            a[i+1]=(k-a[i]);

        }


    }
    cout<<cnt<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
