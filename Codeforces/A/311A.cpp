#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int dis(int x1 , int y1 ,int x2 , int y2)
{
    int p = x2 - x1;
    int q = y2 - y1;
    int distance = sqrt((p*p)+(q*q));
    return distance;
}
void solve()
{
    int n , k;
    cin >> n >> k;
/*
    vector<pi > p;
    for(int i = 0; i < n; i++)
    {
        int x , y;
        cin >> x >> y;
        p.push_back({x , y});
    }
    ll d = 1e10 + 5;
    int tot = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            ++tot;
            if(p[j].first - p[i].first >= d)
            {
                break;
            }
            int r = p[i].first;
            int s = p[i].second;
            int l = p[j].first;
            int m = p[j].second;
            d = min(d , 1ll*dis(r , s, l , m));
        }
    }
    cout<<tot;*/
    ll r = (n - 1)*n/2;
    if(k >= r)
    {
        cout<<"no solution";
    }
    else{
        for(int i = 0 ; i < n; i++)
        {
            cout<<2<<" "<<2 + i + 1<<'\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
