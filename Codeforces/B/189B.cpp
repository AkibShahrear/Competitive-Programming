#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int w , h;
    cin >> w >> h;
    ll ans = 0;
    for(int i = 1; i < w; i++)
    {
        for(int j = 1; j < h; j++)
        {
            ans += min(i , w - i) * min(j , h - j);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}
