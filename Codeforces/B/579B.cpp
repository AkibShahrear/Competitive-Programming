#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
vector<pair<int , pi> >v;
int N[1000];
void solve()
{
    int n;
    cin >> n;
    for(int i = 1; i < (2*n); i++)
    {
        for(int j = 1; j <= i; j++)
        {
            int x;
            cin >> x;
            v.push_back(make_pair(x ,make_pair(j , (i + 1))));
        }
    }
    sort(v.rbegin(),v.rend());
    for(int i = 0; i < v.size(); i++)
    {
        int u = v[i].second.first;
        int p = v[i].second.second;
        cout<<"v[i]: "<<v[i].first<<" u: "<<u<<" p: "<<p<<'\n';
        if(N[u] || N[p]) continue;
        N[u] = p;
        N[p] = u;
    }
    for(int i = 1; i <= 2*n; i++)
        cout<<N[i]<<" ";

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
