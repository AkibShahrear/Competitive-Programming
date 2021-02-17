#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        vector<long long>v(n);
        for(int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        ll mx = 0;
        for(int i = 1; i < n; i++)
        {
            ll q = v[i]*100;
            ll r = q / k;
            if(q % k != 0) r++;
            if(v[i - 1] < r)
            {
                mx = max(r - v[i - 1], mx);
            }

            v[i] += v[i - 1];

        }
        cout<<mx<<'\n';
        v.clear();
            }
    return 0;
}

