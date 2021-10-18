#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll m, n;
    cin >> n >> m;
    if(n == 1 && m ==  1)
    {
        cout<< 1;
        return 0;
    }
    ll l = m - 1;
    ll p = n - m;
    if(m == 1)
    {
        cout<<2;
        return 0;
    }
    else if(l == p)
    {
        cout<<l;
        return 0;
    }
    else if(l > p)
    {
        cout<<l;
        return 0;
    }
    else{
        cout<<m + 1;
        return 0;
    }

    return 0;
}
