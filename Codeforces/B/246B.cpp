#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % n == 0)
    {
        cout<<n;
    }
    else{
        cout<<n - 1;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
