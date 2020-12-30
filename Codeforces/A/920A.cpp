#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[k];
        int cnt=0;
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
            if(i==1) cnt=max(cnt,a[i]);
            //cout<<"cnt for 1: "<<cnt<<'\n';
            if(i==k) cnt=max(cnt,n-a[i]+1);
            //cout<<"cnt for k: "<<cnt<<'\n';
            if(i>1) cnt = max(cnt,(a[i]-a[i-1]+2)/2);
              //cout<<"cnt for i>1: "<<cnt<<'\n';
        }



    cout<<cnt<<'\n';
}
}
