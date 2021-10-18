#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int N = 220;
vi a[N];
bool used[N];

void dfs(int v)
{
    if(used[v]) return;
    used[v] =true;
    for(int i = 0; i < (int)a[v].size(); i++)
    {
        dfs(a[v][i]);
    }
}

void solve()
{
    int n , m;
    cin >> n >> m;
    bool is = 0;
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        is |= (k != 0);
        for(int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            x += (n - 1);
            a[i].pb(x);
            a[x].pb(i);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(!used[i])
            ans++,dfs(i);
    }
    ans = max(0 , ans - is);
    cout<<ans;
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
