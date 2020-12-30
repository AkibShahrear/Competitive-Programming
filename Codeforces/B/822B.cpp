#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mx=-1,l;
    cin>>n>>m;
    string s,t,p,q;
    cin>>s>>t;
    for(int i=0;i+n<=m;i++)
    {
        q=t.substr(i,n);
      //  cout<<q<<'\n';
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(q[j]==s[j])
            {
                cnt++;
            }
        }
        if(cnt>mx)
        {
            mx=cnt;
            p=q;
            l=i;
        }
    }
    cout<<n-mx<<'\n';
   // cout<<p;
    //cout<<"l: "<<l<<'\n';
   // l=l+1;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=p[i])
        {
            cout<<i+1<<" ";

        }
        l++;
    }

}
