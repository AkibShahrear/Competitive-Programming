#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int>mp;
vector<ll> a(26);
void solve()
{
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        int p = (s[i] - 'A');
       // cout<<"p: "<<p<<'\n';
        a[p]++;
    }
    sort(a.rbegin() , a.rend());
    ll sum = 0;
    int q = k;
    for(int i = 0; i < 26; i++)
    {
        ll l = min(a[i] , 1ll*q);
        sum += (l * l);
        q -= l;
        if(q <= 0)
        {
            break;
        }
    }
    cout<<sum<<'\n';
}


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}

