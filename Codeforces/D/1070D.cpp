#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll>a(n);
    ll all = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        all += a[i];
    }
    ll sum = 0;
    ll cnt = a[0];
    if(n == 1)
    {
        cout<< (cnt/k) + (cnt%k != 0);
        return;
    }
    for(int i = 1; i < n; i++)
    {
        ll y = cnt % k;
        if(y > 0) y = k - y;
        y = min(y , a[i]);
        cnt += y;
        sum += (cnt + k - 1)/k;
        cnt = a[i] - y;
    }
    sum += (cnt + k - 1)/k;
    cout<<sum<<'\n';
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
