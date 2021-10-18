#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int m , k;
    cin >> m >> k;
    vi d(m),s(m);
    int mx  = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> d[i];
    }
    int str = 0;
    int tot_time = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> s[i];
        mx = max(mx , s[i]);
       str += s[i];
        while(str < d[i]){str += mx, tot_time += k;}
        tot_time += d[i];
        str -= d[i];
    }
    cout<<tot_time;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
