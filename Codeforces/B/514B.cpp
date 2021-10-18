#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n,x0,y0;
    cin >> n >> x0 >> y0;
    vi x(n),y(n);
    set<double>s;
    int is = 0, ok = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        if(x[i] == x0 || y[i] == y0)
        {
            if(x[i] == x0)
            {
                is = 1;
            }
            if(y[i] == y0)
            {
                ok = 1;
            }
        }
        else{
            double p = ((double)y[i] - (double)y0)/((double)x[i] - (double)x0);
            s.insert(p);
         }
    }
    cout<<s.size() + is + ok<<'\n';

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
