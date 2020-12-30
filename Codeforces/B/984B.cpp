#include<bits/stdc++.h>
using namespace std;
char a[300][300];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int p;
            if(a[i][j]=='.')
            {
                p=0;
            }
            else{
             p = (int)a[i][j]-'0';
            }
            if((a[i][j]>='1' && a[i][j]<='8')||a[i][j]=='.')
            {
               // cout<<a[i][j]<<'\n';
                int cnt=0;
                if(a[i-1][j]=='*')
                {
                    cnt++;
                }
                if(a[i][j+1]=='*')
                {
                    cnt++;
                }
                if(a[i+1][j]=='*')
                {
                    cnt++;
                }
                if(a[i][j-1]=='*')
                {
                    cnt++;
                }
                if(a[i+1][j+1]=='*')
                {
                    cnt++;
                }
                if(a[i+1][j-1]=='*')
                {
                    cnt++;
                }
                if(a[i-1][j+1]=='*')
                {
                    cnt++;
                }
                if(a[i-1][j-1]=='*')
                {
                    cnt++;
                }
                //cout<<"cnt: "<<cnt<<'\n';
                if(cnt!=p)
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }

    }
     cout<<"YES";
}
