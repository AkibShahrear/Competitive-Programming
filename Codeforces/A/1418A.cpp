#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        y=(y+1)*k;
        long long cnt=k;
        cnt += (y-1+x-2)/(x-1);
        cout<<cnt<<'\n';
    }
}
