#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

ll gcd(ll a, ll b)
{
    if(a%b == 0) return b;
    else{
        return gcd(b , a%b);
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<ll>a(n);
    ll mx  = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx , a[i]);
    }
    ll sum = 0;
    vector<ll>v;
    for(int i = 0; i < n; i++)
    {
        if((mx - a[i]) != 0)
        {
            v.push_back((mx - a[i]));
        }
        sum += (mx - a[i]);
    }

    ll g = v[0];

    for(int i = 0; i < v.size(); i++)
    {
        //cout<<"v[i] :"<<v[i]<<'\n';
        g = gcd(g , v[i]);
        //cout<<"g: "<<g<<'\n';
    }
    cout<<sum/g<<" "<<g<<'\n';
}
int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
