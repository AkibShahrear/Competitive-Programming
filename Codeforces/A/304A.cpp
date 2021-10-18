#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    for(ll i = 1 ; i < n; i++)
    {
        for(ll j = i + 1; j <= n; j++)
        {
       //     cout<<"i: "<<i<<" j: "<<j<<'\n';
            ll p = (j * j) - (i * i);
            ll q = sqrt(p);
         //   cout<<"p: "<<p<<'\n';
            if(q * q == p && q <= n && q >= i)
            {
           //11     cout<<"q: "<<q<<'\n';
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}

