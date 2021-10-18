#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,int> pi;

void solve()
{
    int p , q , l , r;
    cin >> p >> q >> l >> r;
    vi a(p),b(p);
    vi x;
    map<int , int>mp;
    for(int i = 0; i < p; i++)
    {
        cin >> a[i] >> b[i];
        for(int j = a[i]; j <= b[i]; j++)
        {
            mp[j] = 1;
        }
    }
    vi c(q),d(q);
    int cnt = 0;
    for(int i = 0; i < q; i++)
    {
        cin >> c[i] >> d[i];
    }
   // for(int i = 0; i < q; i++){
     for(int j = l; j <= r; j++)
        {
        bool is = 0;
       for(int i = 0; i < q; i++){
            int u = c[i] + j;
            int v = d[i] + j;
           for(int k = u; k <= v; k++)
           {
               if(mp[k] == 1)
               {
                  is = 1;
                   break;
               }
           }
           if(is)break;
        }if(is)cnt++;
            }


    cout<<cnt<<'\n';
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
