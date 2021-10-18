#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<ll , int>mp;
void solve()
{
    int n , m;
    ll x , y;
    cin >> n >> m >> x >> y;
    vector<ll>a(n),b(m);
    vector<pi>v;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[i] = 1;
    }
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        ll l = a[i] - x;
        if( l < 0 )
        {
            l = 0;
        }
        ll r = a[i] + y;
        while(j < m)
        {
            if(mp[j] == 1){
             //cout<<"b[j]: "<<b[j]<<'\n'<<"l: "<<l<<" r: "<<r<<'\n';
            if(b[j] >= l && b[j] <= r)
            {
                mp[j] = 0;
                v.push_back({(i + 1) , (j + 1)});
                //j++;
                break;
            }
            else{
                if(b[j] > r)
                {
                    break;
                }

               // break;
            }
            }
            j++;
        }

    }
    cout<<v.size()<<'\n';
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;

}
