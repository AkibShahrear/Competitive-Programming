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
        vector<int>v(n+1);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ++v[a];
        }
        int mx = *max_element(v.begin(),v.end());
        int diff = n + 1 - count(v.begin(),v.end(),0);
        //cout<<"mx: "<<mx<<'\n';
        //cout<<"diff: "<<diff<<'\n';
        //cout<<"count: "<<count(v.begin(),v.end(),0)<<'\n';
        cout<<max(min(mx-1,diff),min(mx,diff-1))<<endl;

        //cout<<"dis: "<<dis<<'\n';
        //cout<<"same: "<<same<<'\n';

    }
}
