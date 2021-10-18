#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int>mp;
void solve()
{
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int a , b , c;
        cin >> a >> b >> c;
        mp[a] += c;
        mp[b] -= c;
    }
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(mp[i] < 0)
        {
            sum += abs(mp[i]);
        }
    }
    cout<<sum;

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
