#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    vi a(n - 1),b(n - 1),c(n);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vi p;
    int k = 0 , l = sum2,j = 0;
    for(int i = 0; i < n; i++)
    {
       l += c[i];
       p.push_back(l);
      // cout<<"l: "<<l<<'\n';
       l -= c[i];
       l += a[j];
       l -= b[j];
       j++;
    }
    sort(p.begin() , p.end());
    cout<<p[0] + p[1];
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
