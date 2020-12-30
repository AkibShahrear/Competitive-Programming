#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int w[n],h[n],b[n];
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>w[i]>>h[i];
        sum += w[i];
        b[i] = h[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        long long total = 0, mx = 0;
        total = sum - w[i];
        if(h[i] == b[n-1])
        {
            mx = b[n-2];
        }
        else{
            mx = b[n-1];
        }
        cout<<total*mx<<' ';
    }
}
