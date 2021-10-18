#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int>pi;
ll m = 1e9 + 7;
ll x, y;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> x >> y;
    ll n;
    cin >> n;
    ll p = (y - x);
  /*  if(x < 0)
    {
        x = m - abs(x %m);
    }
    if(y < 0)
    {
        y = m - abs(y);
    }
    if(p < 0)
    {
        p = m - abs(p);
    }*/
    n = n % 6;
    if(n == 1){cout<<(x+m+m)%m;}
    else if(n == 2){cout<<(y+m+m)%m;}
    else if(n == 3){cout <<(p+m+m)%m;}
    else if(n == 4){cout<<(-x+m+m)%m;}
    else if(n == 5){cout<<(-y+m+m)%m;}
    else if(n == 0){cout << (-p + m + m)%m;}

    return 0;
}
