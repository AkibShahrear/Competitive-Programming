#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define pb push_back

void solve()
{
    int n , m , d;
    cin >> n >> m >> d;
    vi v;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
    }
    sort(v.rbegin() , v.rend());

    ll mx = 100010000;
    int is = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int cnt = 0;
        for(int j = 0; j < v.size(); j++)
        {
            int p = abs(v[j] - v[i]);
            if(p%d == 0)
            {
                cnt += (p/d);
            }
            else{
                is = 1;
                break;
            }
        }
        mx = min(mx , 1ll*cnt);
    }
    if(mx == 0 && is)
    {
        cout<<-1;
    }
    else{
        cout<<mx;
    }
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
