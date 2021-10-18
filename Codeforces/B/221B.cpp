#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int ,int>mp;

bool is_in_num(ll n)
{
    while(n)
    {
        int t = n%10;
        if(mp[t] == 1)
        {
            return 1;
        }
        n/= 10;
    }
    return 0;
}
void solve()
{
    ll n , p;
    cin >> n;
    p = n;
    while(p)
    {
        int t = p%10;
        mp[t] = 1;
        p /= 10;
    }
    vector<ll>v;
    for(int i = 2; i * i <= n; i++)
    {
        if(n%i == 0)
        {
            if(n/i == i)
            {
                v.push_back(i);
            }
            else{
                v.push_back(n/i);
                v.push_back(i);
            }
        }
    }
    v.push_back(n);
    v.push_back(1);
    //cout<<v.size()<<'\n';
    if(n == 1)
    {
        cout<<1;
        return;
    }
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        //cout<<"v[i]: "<<v[i]<<'\n';
        if(is_in_num(v[i]))
        {
            cnt++;
        }
    }
    cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
