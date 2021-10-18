#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , t;
    cin >> n >> t;
    vector<pair<double , double> >p;
    for(int i = 0; i < n; i++)
    {
        double x , a;
        cin >> x >> a;
        p.push_back({x , a});
    }
    sort(p.begin() , p.end());
    int cnt  = 2;
    for(int i = 0; i < (p.size() - 1); i++)
    {
        if(2 * (p[i + 1].first - p[i].first) > p[i].second + p[i + 1].second + 2*t ) cnt += 2;
        else if(2 * (p[i + 1].first - p[i].first) == p[i].second + p[i + 1].second + 2*t) cnt++;
    }
    cout<<cnt;
}
