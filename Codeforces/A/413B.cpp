#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
map<int , int>mp;
void solve()
{
    int n , m , k;
    cin >> n >> m >> k;
    vi a[100];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            if(x == 1)
            {
                a[j].push_back(i);
            }
        }
    }
    for(int i = 0; i < k; i++)
    {
        int x , y;
        cin >> x >> y;
        y--;
        x--;
        for(int j = 0; j < a[y].size(); j++)
        {
            if(a[y][j] != x)
            {
                mp[a[y][j]]++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<mp[i]<<" ";
    }
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
