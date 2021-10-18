#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> vi;
pair<int , int> pi;
map<ll , int>mp;
void solve()
{
    int n;
    cin >> n;
    vector<ll>v;
    for(int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        mp[x] = 1;
        mp[y] = 2;
        v.push_back(x);
        v.push_back(y);
    }
    sort(v.begin() , v.end());
    int cnt1 = 0,cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(mp[v[i]] == 1)
        {
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    //cout<<"cnt1: "<<cnt1<<" cnt2: "<<cnt2<<'\n';
    if(cnt1 > (n/2))
    {
        for(int i = 0; i < cnt1; i++)
        {
            cout<<1;
        }
        for(int i = cnt1; i < n; i++)
        {
            cout<<0;
        }
        cout<<'\n';
        for(int i = 0; i < (n/2); i++)
        {
            cout<<1;
        }
        for(int i = (n/2); i < n; i++)
        {
            cout<<0;
        }
    }
    else if(cnt2 > (n/2))
    {
        for(int i = 0; i < (n/2); i++)
        {
            cout<<1;
        }
        for(int i = (n/2); i < n; i++)
        {
            cout<<0;
        }
        cout<<'\n';
         for(int i = 0; i < cnt2; i++)
        {
            cout<<1;
        }
        for(int i = cnt2; i < n; i++)
        {
            cout<<0;
        }
    }
    else{
        for(int i = 0; i < (n/2); i++)
        {
            cout<<1;
        }
        for(int i = (n/2); i < n; i++)
        {
            cout<<0;
        }
        cout<<'\n';
        for(int i = 0; i < (n/2); i++)
        {
            cout<<1;
        }
        for(int i = (n/2); i < n; i++)
        {
            cout<<0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
