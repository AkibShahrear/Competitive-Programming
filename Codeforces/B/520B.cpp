#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int f[30010] , n , m;
void dfs(int w , int t)
{
    if(w <= 0 || w >= m*2) return;
    if(f[w] <= t) return;
    f[w] = t;
    dfs(w*2 , t+1);
    dfs(w-1, t+1);
}
void solve()
{
    cin >> n >> m;
    memset(f , 60 , sizeof(f));
    if(n >= m)
    {
        int p = n - m;
        cout<<p;
        return;
    }
    else{
        dfs(n , 0);
        printf("%d\n", f[m]);
        return;
    }

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
