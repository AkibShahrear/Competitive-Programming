#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() , a.end());
    if(a[n - 1] == 1)
    {
        a[n - 1] = 2;
    }
    else{
        a[n - 1] = 1;
    }
    sort(a.begin() , a.end());
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
