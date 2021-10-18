#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int l[110],r[110],t[110],c[110];
map<int , int>mp , mp1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < 110; i++)
{
    mp[i] = 1100;
    mp1[i] = 1100;
}
    for(int i = 0; i < m; i++)
    {
        cin >> l[i] >> r[i] >> t[i] >> c[i];
        for(int j = l[i]; j <= r[i]; j++)
        {
            if(t[i] < mp[j])
            {
                mp[j] = t[i];
                mp1[j] = c[i];
            }
        }
    }
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(mp1[i] == 1100)
        {
            sum += 0;
        }
        else{
        //cout<<mp1[i]<<'\n';
        sum += mp1[i];
        }
    }
    cout<<sum;
}
