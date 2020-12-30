/*
n markers and m markers caps
xi is the color
yi is the diameter
each cap aj color bj diameter
(aj,bj) close marker (xi,yi) ==> bj = yi
beautifully closed ai = xi
*/
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000 + 10;

int p[MAX][MAX];
int q[MAX][MAX];

int main()
{
    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));
    int n, m,x,y,a,b;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        p[y][x]++;
    }
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        q[b][a]++;
    }
    int closed = 0,beautiful = 0;
    for(int i = 0; i < MAX; i++ )
    {
        int r = 0, s = 0;
        for(int j = 0; j < MAX; j++)
        {
            r += p[i][j];
            s += q[i][j];
           // cout<<"p[i][j]: "<<p[i][j]<<": r =="<<r<<'\n';
           // cout<<"q[i][j]: "<<q[i][j]<<": s =="<<r<<'\n';
            beautiful += min(p[i][j] , q[i][j]);
        }
        closed += min(r ,s);
    }
    cout<<closed <<" "<<beautiful;
    return 0;
}
