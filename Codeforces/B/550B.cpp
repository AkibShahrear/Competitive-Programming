#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define pb push_back
int c[20];
int mx , mn;
void solve()
{
int n, l , r, x;
scanf("%d%d%d%d",&n,&l,&r,&x);
for(int i = 1; i <= n; i++)
{
    scanf("%d",&c[i]);
}
int cnt , sum;
int ans = 0;
for(int i = 1; i < (1 << n); i++)
{
    cnt = sum = 0;
    mx = 0 , mn = 0x7fffffff;
    for(int j = 1; j <= n; j++)
    if(i & (1 << (j - 1)))
    {
        cnt++; sum += c[j];
        mx = max(mx , c[j]);
        mn = min(mn , c[j]);
    }
    if(cnt < 2) continue;
    if(sum >= l && sum <= r && mx - mn >= x) ans++;
}
cout<<ans;
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
