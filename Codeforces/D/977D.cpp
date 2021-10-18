#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<ll , int>mp;
void solve()
{
int n;
cin >> n;
vector<ll> a(n);
for(int i = 0; i < n; i++)
{
    cin >> a[i];
    mp[a[i]] = 1;
}
vector<ll>v;
for(int i = 0; i < n; i++)
{
    int cnt = 1;
    v.pb(a[i]);
    ll p = a[i];
    while(true)
    {
        if(p%3 == 0)
        {
            ll r = p/3;
            ll q = p*2;
            if(mp[r] == 1 || mp[q] == 1)
            {
                if(mp[r] == 1){
                v.pb(r);
                p = r;
                }
                else{
                    v.pb(q);
                    p = q;
                }
                cnt++;
                if(cnt == n)
                {
                    break;
                }
            }
            else{
                break;
            }
        }
        else{
            ll q = p*2;
            if(mp[q] == 1)
            {
                v.pb(q);
                p = q;
                cnt++;
                if(cnt == n)
                {
                    break;
                }
            }
            else{
                break;
            }
        }
        //cout<<"p: "<<p<<" cnt: "<<cnt<<'\n';
    }
    if(cnt == n)
    {
        break;
    }
    else{
        v.clear();
    }
}
for(int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
