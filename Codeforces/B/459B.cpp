#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main()
{
    long long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    int mx=a[t-1]-a[0];
    cout<<mx<<" ";
    long long cnt1=0,cnt2=0;

    for(int i=0;i<t;i++)
    {

           cnt1+=(a[i] == a[0]);


           cnt2+=(a[i]==a[t-1]);

    }
    if(a[0]==a[t-1])
    {
        cout<<t*(t-1)/2<<'\n';
    }
    else{
        cout<<cnt1*cnt2<<'\n';
    }
}
