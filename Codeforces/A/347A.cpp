#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() , a.end());
    swap(a[0] , a[n - 1]);
    for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
