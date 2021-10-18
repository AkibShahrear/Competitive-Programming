#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x, y;
    cin >> x >> y;
    int k;
    cin >> k;
    ll cnt = 0;
    for(int i = 0; i < k; i++)
    {
        ll dx , dy;
        cin >> dx >> dy;
        ll p = x + dx;
        ll q = y + dy;
        ll r = min(n , m);
        //cout<<"p: "<<p<<" q: "<<q<<'\n';
        if((x + dx) <= n && (y + dy) <= m && (x + dx) > 0 && (y + dy) >0){
              //cout<<"x: "<<x<<" y: "<<y<<'\n';
              ll s , t;
              if(dx < 0)
              {
                  s = (x - 1)/abs(dx);

              }
              if(dy < 0)
              {
                  t = (y - 1)/abs(dy);
              }
              if(dx > 0){
               s = (n - x)/abs(dx);
              }
              if(dy > 0){
               t = (m - y)/abs(dy);
              }
              if(dy == 0)
              {
                  t = s;
              }
              if(dx == 0)
              {
                  s = t;
              }
              ll r = min(s , t);
              x += (r*dx);
              y += (r*dy);
              cnt += min(s , t);
              //cout<<"s: "<<s<<" t: "<<t<<" r: "<<r<<'\n';
            }

    }
    cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
