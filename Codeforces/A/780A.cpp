#include<bits/stdc++.h>
using namespace std;
int v[100005];
int main()
{
    int n;
    cin>>n;
    int a;

    int cnt=0,k=0;
    for(int i=0;i<2*n;i++)
    {
        cin>>a;
        //cout<<"v["<<a<<"]="<<v[a]<<'\n';
        if(v[a]==0) cnt++;
        else cnt--;
        v[a]++;
        if(cnt>k)
            k=cnt;
    }
    cout<<k;
}
