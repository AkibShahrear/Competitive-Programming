#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0)
#define io cin.tie(0)
#define rz return 0
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    int sz = 0;
    int p = n;
    vi rem;
    int mx = 0;
    while(p)
    {
        sz++;
        int t = p%10;
        mx = max(mx , t);
        rem.push_back(t);
        p /= 10;
    }
    reverse(rem.begin() , rem.end());
    cout<<mx<<'\n';
    for(int i = 0; i < mx; i++)
    {
        int sum = 0;
        for(int j = 0; j < rem.size(); j++)
        {
            //cout<<"rem[j]: "<<rem[j]<<'\n';
            sum *= 10;
            sum += (rem[j] == 0) ? 0:1;
            if(rem[j] >= 1)
            {
                rem[j]--;
            }
        }
        cout<<sum<<" ";
    }
}

int main()
{
    fast;io;

    solve();

    rz;
}
