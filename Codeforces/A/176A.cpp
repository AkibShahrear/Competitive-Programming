#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int N = 210;
int a[N][N] , b[N][N] , c[N][N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m , k;
    cin >> n >> m >> k;
    int sell_max = 0;
    int cost = 0;
    vector<pi> p;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j =  0; j < m; j++)
        {
           cin >> a[i][j] >> b[i][j] >> c[i][j];
        }
    }
    int cnt  = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(i != j){
                vector< pi > p;
                p.clear();
                for(int l = 0; l < m; l++)
                {
                    if(a[i][l] < b[j][l])
                    {
                        p.push_back({(b[j][l] - a[i][l]), c[i][l]});
                    }
                }
               sort(p.rbegin() , p.rend());
               int cur = 0;
               int res = k;
               for(int h = 0; h < p.size() && res > 0; h++)
               {
                   if(p[h].second > 0){
                   cur += p[h].first * min(res , p[h].second);
                   res -= min(res , p[h].second);
                   }
               }
               cnt = max(cur , cnt);
            }
        }
    }
   cout<<cnt;

    return 0;
}
