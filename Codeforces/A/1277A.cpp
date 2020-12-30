#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=1,p=1,s;
        cin>>n;
        s=n;
        //cout<<n;
        int cnt=0,ans=0;
        for(int i=1;i<=9;i++)
        {
            cnt=cnt*10+1;
            for(int j=1;j<=9;j++)
            {
                if(cnt*j<=n)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<'\n';

    }
}
