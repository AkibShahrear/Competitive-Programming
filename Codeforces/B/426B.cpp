#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[110][110];
int n , m, t , k;
bool fun(int x){
if(x%2 == 1) return 0;
int p = 0;
for(int i = 0; i < x/2; ++i)
{
    for(int j = 0; j < m; ++j){
        if(a[i][j] != a[x - i - 1][j]){p = 1;}
    }
}
if(p) return 0;
return 1;
}
void solve()
{
    cin >> n >> m;
    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) cin >> a[i][j];
    t = n;
    for(int i = 0; ; ++i)
    {
        k = 0;
        if(fun(t)){
            t /= 2;
            k = 1;
        }
        if(k == 0) {break;}//goto h;
    }
    //h: ;
    cout<<t<<'\n';
    return ;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
