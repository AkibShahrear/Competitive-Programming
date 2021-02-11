#include<bits/stdc++.h>
using namespace std;
int a[500];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        for(int i=0;i<m;i++)
        {
            int y;
            cin>>y;
            a[y]++;
        }
        int cnt = 0;
        for(int i=1;i<=100;i++)
        {
            //cout<<"a[i]: "<<a[i]<<'\n';
           if(a[i]==2)
           {
               cnt++;
           }
        }
        cout<<cnt<<'\n';
    }
}
