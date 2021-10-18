#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

map<int , int> mp;
void solve()
{
    int t;
    cin >> t;

    vi a(t),d;
    int sum = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int pos = 0;
    int mx = -2e9;
    int p = 0;
    for(int j = t; j >= 1; j--)
    {
        if((t % j == 0) && (t / j >= 3))
        {
            for(int i = 0; i < j; i++){
                int sum = 0;
                for(int k = i; k < t; k += j)
                {
                    sum += a[k];
                }
                mx = max(sum , mx);
            }
        }
    }

    cout<<max(mx , sum);

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
