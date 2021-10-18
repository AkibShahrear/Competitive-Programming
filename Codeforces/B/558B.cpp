#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

map<int, int> mp, pos,init_pos;

void solve()
{
int n;
cin >> n;
vi a(n + 1);
int mx = 0;
int mn = 1e6 + 10;
for(int i = 1; i <= n; i++)
{
    cin >> a[i];
    mp[a[i]]++;
    pos[a[i]] = i;
    if(init_pos[a[i]] == 0){
    init_pos[a[i]] = i;
    }
    if(mp[a[i]] > mx)
    {
        mx = mp[a[i]];
    }
}
vi p;
int ip , ep;
int mn1 =1e6 + 7;
for(int i = 1; i <= n; i++)
{
    if(mp[a[i]] == mx)
    {
        p.push_back(a[i]);
        int l = (pos[a[i]] - init_pos[a[i]]);
        //cout<<"l: "<<l<<'\n';
        if(l < mn1)
        {
            mn1 = l;
            ip =init_pos[a[i]];
            ep = pos[a[i]];
        }
    }
}
cout<<ip<<" "<<ep;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
