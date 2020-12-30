#include<bits/stdc++.h>
using namespace std;
long long b[1000];
int main()
{
    int n;
    cin>>n;
    long long a[n],sum1=0;
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum1+=a[i];

    }
   // cout<<"sum1: "<<sum1<<'\n';
    sort(a,a+n);
    long long sum = 0;
    long long p = a[n-1] + 1;
    for(int i = n-1; i >= 0; i--)
    {
        p--;
        if(a[i] > p)
        {
            a[i] = p;
        }
        sum += max(a[i], 0LL);
        p = a[i];
    }
    cout<<sum;

}
