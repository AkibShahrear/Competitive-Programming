#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    ll a;
    cin >> a;
    ll sum = 1 , b = 12;
    for(int i = 0; i < a - 1; i++)
    {
        sum += b;
        b += 12;
    }
    cout<<sum;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
