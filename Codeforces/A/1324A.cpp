#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int x,mn=101,mx=-1,o=0,e=0;
        for(int i=0;i<a;i++)
        {
            cin>>x;
            if(x%2==0)
            {
                e++;
            }
            if(x%2!=0)
            {
                o++;
            }
            if(mx<x)
            {
                mx=x;
            }
            if(mn>x)
            {
                mn=x;
            }

        }
        if(e!=0 && o!=0)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
}
