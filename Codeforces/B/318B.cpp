#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<ll,ll>mp;
void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    for(int i = 0; i < l; i++) {
        if(s[i] == 'm' && s[i + 1] == 'e' && s[i + 2] == 't' && s[i + 3] == 'a' && s[i + 4] == 'l')
        {
            mp[i] = 1;
        }
    }
    for(int i = l - 1; i >= 0; i--)
    {
        mp[i] += mp[i + 1];
    }
    ll sum = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i] == 'h' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'v' && s[i + 4] == 'y')
        {
         sum += mp[i];
        }
    }
    cout<<sum;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
