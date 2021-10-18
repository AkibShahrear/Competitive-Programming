#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , t1, t2 , k;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<double, int> >v;
    map<double, int>mp;
    for(int i = 0; i < n ; i++)
    {
        double x , y;
        cin >> x >> y;
        double p = (x * (double)t1) - (x * ((double)k / 100)*(double)t1) + (t2 * y);
        double q = (y * (double)t1)- (y * ((double)k / 100) * t1) + (t2 * x);
        v.push_back({-max(p , q) , (i + 1)});
    }
    sort(v.begin() , v.end());
    for(int i = 0; i < v.size(); i++)
    {
        printf("%d %0.2lf\n", v[i].second ,-v[i].first);
    }
    return 0;
}
