#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int> vis;
int main()
{
    int n , m;
    cin >>n >> m;
    for(int i = 0; i < m; i++)
    {
        int x , y;
        cin >> x >> y;
        vis[x] = 1;
        vis[y] = 1;
    }
    int p = 0;
    for(int i = 1; i <= n; i++)
    {
        if(vis[i] == 0)
        {
            p = i;
            break;
        }
    }
    cout<<n - 1<<'\n';
    for(int i = 1; i <= n; i++)
    {
        if(p != i)
        {
            cout<<i<<" "<<p<<'\n';
        }
    }

}
