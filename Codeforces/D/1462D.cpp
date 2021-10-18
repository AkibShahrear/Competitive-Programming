#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for(ll &x: a){
        cin >> x;
        sum += x;
    }

    for(int i = n; i >= 1; i--)
    {
        if(sum % i == 0)
        {
            ll ns = sum/i;
            ll cs = 0;
            bool ok = 1;
            for(int j = 0; j < n; j++)
            {
                cs += a[j];
                if(cs > ns){
                    ok = 0;
                    break;
                } else if(cs == ns){
                cs = 0;
                }
            }
            if(ok){
                cout<<n - i<<'\n';
                return;
            }
        }
    }
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
    solve();
    }

    return 0;
}
