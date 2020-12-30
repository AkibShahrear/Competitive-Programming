#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[222222],b[222222];
int main()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++) cin>>a[i];
    int x=0;
    while(!b[x]){
        b[x]=1;
        if(s[x] == '<') x-=a[x]; else x += a[x];
        if(x<0 || x>=n)
        {
            cout<< "FINITE"<<'\n';
            return 0;
        }

    }
    cout<<"INFINITE"<<'\n';
    return 0;
}
