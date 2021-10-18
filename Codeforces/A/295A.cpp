#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
const int N = (int)1e5 + 10;
int b[N];
ll s[N];
ll ans[N];
void solve()
{
int n , m , k;
cin >> n >> m >> k;
vector<ll> a(n);
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
vi l(m),r(m),d(m);
for(int i = 0; i < m; i++)
{
    cin >> l[i]>>r[i]>>d[i];

}
for(int i = 0; i < m; i++)
{
    l[i] -= 1;
    r[i] -= 1;

}
for(int i = 0; i < k; i++)
{
    int x, y;
    cin >> x >> y;
    b[x - 1] += 1;
    b[y] -= 1;
}
ll cnt = 0;
for(int i = 0; i < m; i++)
{
    cnt += b[i];
    s[l[i]] += cnt*d[i];
    s[r[i] + 1] -= cnt*d[i];

}
cnt = 0;
for(int i = 0; i < n; i++)
{
    cnt += s[i];
    ans[i] = a[i] + cnt;

}
for(int i = 0; i < n; i++)
{
    cout<<ans[i]<<" ";
}
}


int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
