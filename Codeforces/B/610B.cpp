#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = 2e9 + 10;
    int pos = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(mn >= a[i])
        {
            mn = a[i];
            pos = i;
        }
    }
    int sum = 0;
    vi p;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == mn)
        {
            p.push_back(i);
        }
    }
    ll mx_diff = 0;
    for(int i = 0; i < p.size() - 1; i++)
    {
        int d = p[i + 1] - p[i] - 1;
        if(d > mx_diff)
        {
            mx_diff = d;
        }
    }
    int l = p.size() - 1;
    int r = ((n - 1) - p[l]) + p[0];
    //cout<<"mx_diff: "<<mx_diff<<'\n';
    mx_diff = max(mx_diff , 1ll*r);

    cout<<mn*n + mx_diff;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
