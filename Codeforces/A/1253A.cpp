#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int start=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                start=i;
                break;
            }
        }
        int End=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                End=i;
            }
        }
        bool is=0;
         int p=b[start]-a[start];
        for(int i=start;i<=End;i++)
        {


            if((b[i]-a[i])!=p || (b[i]-a[i])<0)
            {
                is=1;
                break;
            }
        }

        if(is)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
