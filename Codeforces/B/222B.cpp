#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[1100][1100];
void solve()
{
    int n , m , k;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < k; i++)
    {
        char s;
        int x , y;
        cin >> s >> x >> y;
        if(s == 'g')
        {
            x--;
            y--;
            cout<<a[x][y]<<'\n';
        }
        else if(s == 'r')
        {
            x--;
            y--;
            for(int i = 0; i < m; i++)
            {
                swap(a[x][i] , a[y][i]);
            }
        }
        else if(s == 'c')
          {
            x--;
            y--;
            for(int i = 0; i < n; i++)
            {
                swap(a[i][x] , a[i][y]);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
