#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
  int n;
  cin >> n;
  vector<ll> a(n),b(n);
  for(int i = 0; i < n; i++)
  {
      cin >> a[i];
  }
  for(int i = 0; i < n; i++)
  {
      cin >> b[i];
      a[i] -= b[i];
  }
  sort(a.begin() , a.end());
  ll cnt = 0;
  for(int i = 0; i < n; i++)
  {
  int l = -1, r = i;
  while(r - l > 1){
    int m = l + (r - l)/2;
    if(a[m] + a[i] > 0)
    {
        r = m;
    } else {
    l = m;
    }
  }
  cnt  += (i - r);
  }
  cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
