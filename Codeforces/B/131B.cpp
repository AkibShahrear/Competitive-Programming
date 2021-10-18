#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<ll,ll>mp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    ll sum = 0;
    for(int i = 1; i <=10 ; i++)
    {
        //cout<<"mp[i]: "<<mp[i]<<" mp[-i]: "<<mp[-1*i]<<'\n'
        sum += (mp[i]*mp[(-1 * i)]);
    }
    ll p = (mp[0] - 1) * mp[0]/2;
    sum += p;
    cout<<sum;


}

