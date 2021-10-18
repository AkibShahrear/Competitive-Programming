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
    //sort(a.begin() , a.end());
    ll l = 0, c = a[0];
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == c)
        {
            l++;
        }
        else{
            sum += (l*(l + 1)/2);
            c = a[i];
            l = 1;
        }
    }
     sum += (l*(l + 1)/2);
    cout << sum << '\n';

}

int main()
{
ios::sync_with_stdio(0);cin.tie(0);

solve();

return 0;
}
