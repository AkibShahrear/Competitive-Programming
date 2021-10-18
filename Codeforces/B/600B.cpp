#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,int> pi;
map<ll , ll>mp;
int main()
{
    int n , m;
    cin >> n >> m;
    vector<ll>a(n),b(m);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
    sort(a.begin() , a.end());
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        ll k = b[i];
        int j = 0;
        ll p = 0, q = n - 1;
        ll x = 0;
        ll y = 0;
        while(p <= q)
        {
            ll mid = p + ((q - p)/2);
            y = mid;
            if(a[mid] > k)
            {
                x = mid;
                //break;
                q = mid - 1;
                //x = q;

            }
            else{
                p = mid + 1;
            }
            //cout<<"p: "<<p<<" q: "<<q<<'\n';
        }
        //cout<<"p: "<<p<<" q: "<<q<<'\n';
        //cout<<"mid: "<<y<<'\n';
        cout<<max(p , q)<<" ";
       /* ll s = mp[a[x]];
        if(a[s] == k)
        {
            cout<<mp[a[x]] + 1<<" ";
        }
        else if(mp[a[x]] == 0)
        {
            if(a[0] <= b[0])
            {
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        //cout<<mp[a[s]]<<" ";
        else{
        cout<<mp[a[x]]<<" ";
        }*/
    }
}
