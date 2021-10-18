#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

map<int , int>mp;
void solve()
{
    int x1 , y1 , x2 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int mx = max(y1 , y2);
    int mn = min(y1 , y2);
    int mx1 = max(x1 , x2);
    int mn1 = min(x1 , x2);
    int x3 , y3, x4 , y4;
    x3 = x1;
    y3 = y2;
    x4 = x2;
    y4 = y1;
    vector<pi >gen;
    if(x1 > x2)
    {
        for(int i = x2; i <= x1; i++)
        {
            gen.push_back({i , y1});
        }
        for(int i = x2; i <= x1; i++)
        {
            gen.push_back({i , y2});
        }
    }
    if(x2 > x1)
    {
        for(int i = x1; i <= x2; i++)
        {
            gen.push_back({i , y1});
        }
        for(int i = x1; i <= x2; i++)
        {
            gen.push_back({i , y2});
        }
    }
    if(y1 > y2)
    {
        for(int i = y2 + 1; i < y1; i++)
        {
            gen.push_back({x1 , i});
        }
        for(int i = y2 + 1; i < y1; i++)
        {
            gen.push_back({x2 , i});
        }
    }
    if(y2 > y1)
    {
        for(int i = y1 + 1; i < y2; i++)
        {
            gen.push_back({x1 , i});
        }
        for(int i = y1 + 1; i < y2; i++)
        {
            gen.push_back({x2 , i});
        }
    }
    /*for(int i = 0; i < gen.size(); i++)
    {
        cout<<gen[i].first<<" "<<gen[i].second<<'\n';
    }*/
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int l , m , r;
        cin >> l >> m >> r;
        bool is = 0;
        for(int j = 0; j < gen.size(); j++){
        if(mp[j] == 0){
         is = 1;
        int p = gen[j].first;
        int q = gen[j].second;
        p -= l;
        q -= m;
        double h = sqrt((double)(p)*(double)p + (double)q * (double)q);
        if(h <= (double)r)
        {
            mp[j] = 1;
        }
        }

        }
        if(!is)
        {
            break;
        }
    }
    int cnt = 0;
    for(int i = 0; i < gen.size(); i++)
    {
        if(mp[i] == 0)
        {
            cnt++;
        }
    }
    cout<<cnt<<'\n';
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
