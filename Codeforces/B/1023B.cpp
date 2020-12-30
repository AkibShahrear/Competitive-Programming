#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long k;
    cin>>n>>k;
    long long cnt=0;
    long long mx=(k-1)/2;
    long long mn=1;
    mx=min(mx,n);
    mn=max(mn,k-n);
    if(mn>mx)
    {
        cout<<0<<'\n';
    }
    else{
        cout<<mx-mn+1<<'\n';
    }



}
