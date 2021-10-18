#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define pb push_back

map<int , int>mp;
void solve()
{
    int n;
    cin >> n;
    vi a(n),pos, year;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[(2000 + i + 1)] = a[i];
        if(a[i] > 0)
        {
            pos.pb((2000 + i + 1));
        }
    }
    int cnt = 0;
    for(int i = 0; i < pos.size(); i++)
    {
        int p = mp[pos[i]];
        if(p == (cnt + 1))
        {
            year.pb(pos[i]);
            cnt = p;
        }
    }
    cout<<year.size()<<'\n';
    for(int i = 0; i < year.size(); i++)
    {
        cout<<year[i]<<" ";
    }
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
