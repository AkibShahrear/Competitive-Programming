#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int l=k;
    vector<int>v;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0 && n>i && k>1)
        {
            v.push_back(i);
            n/=i;
            --k;
        }
    }
    if(k>1)
    {
        cout<<-1;
    }
    else{
        for(auto i:v)cout<<i<<" ";
        cout<<n;
    }
    return 0;






}
