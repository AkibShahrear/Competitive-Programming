#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

void solve()
{
    map<int , int>mp;
    int n;
    cin >> n;
    vi a(n) , v, freq;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]] == 1)
        {
            v.pb(a[i]);
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        freq.pb(mp[v[i]]);
    }
    sort(freq.rbegin() , freq.rend());
    ll sum = 0;
    int p = 0;
    for(int i = 0; i < freq.size(); i++)
    {
        if(i == 0)
        {
            sum += freq[i];
            p = freq[i] - 1;
        }
        else{
            if(p < 0)
            {
                sum += 0;
            }
            else if(freq[i] == p)
            {
                sum += p;
                p = freq[i] - 1;
            }
            else if(freq[i] < p)
            {
                sum += freq[i];
                p = freq[i] - 1;
            }
            else if(freq[i] > p)
            {
                sum += p;
                p -= 1;
            }
        }
    }
    cout<<sum<<'\n';
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
