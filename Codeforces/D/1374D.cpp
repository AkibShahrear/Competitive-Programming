#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll>a;
    map<ll , ll>mp;
    ll cnt = -1;
    for(int i = 0; i < n; i++)
    {
        ll b;
        cin>> b;
        b %= k;
        if(b == 0)
        {
            continue;
        }
        mp[b]++;
        //cout<<"mp[b]*k - b: "<<mp[b]*k -b<<'\n';
        cnt = max(cnt , mp[b] * k - b);
    }
    cout<<cnt + 1<<'\n';

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
