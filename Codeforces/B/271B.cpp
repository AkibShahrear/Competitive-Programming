#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int inf = 1<<29;
int a[201000],vis[200010],s1[510],s2[510];
void solve()
{
    int n , m;

    a[1] = 1;
    for(int i = 2; i <= 200000; i++)
    {
        if(a[i] == 0)
        {
            for(int j = i * 2; j <= 200000; j+=i)
            {
                a[j] = 1;
            }
        }
    }
    int mn = inf;
    for(int i = 200000; i >= 1; i--)
    {
        if(a[i] == 0) mn = i;
        vis[i] = mn;
    }
    scanf("%d%d",&n,&m);
    int l;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d",&l);
            s1[i] += vis[l] - l;
            s2[j] += vis[l] - l;
        }
    }
   int cnt = inf;
   for(int i = 0; i < n; i++){
    cnt = min(cnt , s1[i]);
   }
   for(int i = 0; i < m; i++){
    cnt = min(cnt , s2[i]);
   }

    cout<<cnt;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
