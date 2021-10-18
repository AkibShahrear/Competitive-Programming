#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int> mp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m , k;
    cin >> n >> m >> k;
    for(int i = 0 ; i <= m; i++)
    {
        mp[i] = 1010000;
    }
    ll sum = 0;
    bool is = 0;
    for(int i = 0; i < n; i++)
    {
        int x , y;
        cin >> x >> y;
        mp[x] = min(mp[x] , y);


    }
    for(int i = 1; i <= m; i++)
    {
        //cout<<"mp[i]: "<<mp[i]<<'\n';
        sum += mp[i];
    }
    cout<<min(sum , 1LL*k);
    return 0;
}
