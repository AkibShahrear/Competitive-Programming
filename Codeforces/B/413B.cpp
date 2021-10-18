#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int M = 100001;
int ans[M];
#define pb push_back
map<int , int>mp;
int b[20];
void solve()
{
    int n , m , k;
    cin >> n >> m >> k;
    vi a[100];
    for(int i = 0; i < n; i++)
    {
        ans[i] = 0;
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
        x--;
        y--;
        ans[x]--;
        b[y]++;

    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < a[i].size(); j++)
        {
            ans[a[i][j]] += b[i];
        }
    }
    for(int i = 0; i < n; i++) cout<< ans[i] << " ";
    cout<<endl;
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
