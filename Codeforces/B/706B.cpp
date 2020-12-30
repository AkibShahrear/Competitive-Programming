#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cin>>q;
    int y;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        int ans= upper_bound(v.begin(),v.end(),y)-v.begin();
        cout<<ans<<'\n';

    }

}
