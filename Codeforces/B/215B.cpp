#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    vi x(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int m;
    cin >> m;
    vi y(m);
    for(int i = 0; i < m; i++)
    {
        cin >> y[i];
    }
    int k;
    cin >> k;
    vi z(k);
    for(int i = 0; i < k; i++)
    {
        cin >> z[i];
    }
    int a , b;
    cin >> a >> b;
    sort(x.begin() , x.end());
    sort(y.begin() , y.end());
    sort(z.begin() , z.end());
    double r1 = x[n - 1];
    double p2 = z[0];
    double p1 = y[m - 1];
    printf("%.12lf\n",sqrt(r1*r1/(1 + a*p2/b/p1)));
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
