#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long  mn=100001010000;
    for(int i=0;i<n-1;i++)
    {
       long long p = abs(a[i+1]-a[i]);
       if(p<mn)
       {
           mn=p;
       }
    }
    int cnt=0;
     for(int i=0;i<n-1;i++)
    {
        long long p = abs(a[i+1]-a[i]);
       if(p==mn)
       {
           cnt++;
       }
    }
    cout<<mn<<" "<<cnt<<'\n';

}
