#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int t;
    cin >> t;
    ll side1 = -1e10 + 10;
    ll side2 = 1e9 + 10;
    ll side3 = -1e10 + 10;
    ll side4 = 1e9 + 10;
    while(t--)
    {
        ll a , b;
        cin >> a >> b;
        side1 = max(side1 , a);
        side2 = min(side2 , a);
        side3 = max(side3 , b);
        side4 = min(side4 , b);
    }
    //cout<<"side1: "<<side1<<" side2: "<<side2<<'\n';
    ll p = (side1 - side2);
    ll q = (side3 - side4);
    //cout<<"p: "<<p<<" q: "<<q<<'\n';
    cout<<max(p , q) * max(p , q);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
