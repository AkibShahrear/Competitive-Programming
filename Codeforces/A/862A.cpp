#include<bits/stdc++.h>
using namespace std;
bool a[123];
int main()
{
    int n,x;
    cin>>n>>x;
    int k;

    while(n--)
    {
        cin>>k;
        a[k]=1;
    }
    int cnt=a[x];
    for(int i=0;i<x;i++)
        cnt+=!a[i];
    cout<<cnt;
}
