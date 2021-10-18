#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n , m , v , p;
    cin >> n >> m;
    int k = min(n , m);
    if(k > 1)
    {
        int l = max(n , m);
        v = 2;
        p = l - 1;
        cout<<p <<" "<<k;
    }
    else{
        v = 1;
        int l = max(n , m);
        p = l - 1;
        cout<<p<<" "<<k<<'\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
