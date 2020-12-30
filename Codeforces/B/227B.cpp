#include<bits/stdc++.h>
using namespace std;
 long long a[100021],l[100021],k[100021],i,j,t;
int main()
{
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        k[a[i]]=i;

    }
    long long q;
    cin>>q;
    long long cnt=0,tmp=0;
    for( j=0;j<q;j++) cin>>l[j];
    for(int i=0;i<q;i++)
    {
        cnt+=k[l[i]]+1;
        tmp+=t-k[l[i]];
    }
    cout<<cnt<<" "<<tmp<<'\n';
}
