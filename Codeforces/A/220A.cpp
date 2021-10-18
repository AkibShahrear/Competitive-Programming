#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin() , a.end());
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            cnt++;
        }
    }
    if(cnt <= 2)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;


}
