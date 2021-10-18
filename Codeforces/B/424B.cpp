#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , s;
    cin >> n >> s;
    vector< pair<double , int> > v;
    for(int i = 0; i <n; i++)
    {
        double x ,y ;
        int k;
        cin >> x >> y >> k;
        double p = (x * x) + (y * y);
        v.push_back(make_pair(p , k));
    }
    sort(v.begin() , v.end());
    ll sum = s;
    for(int i = 0; i < v.size(); i++)
    {
        sum += v[i].second;
        if(sum >= 1000000)
        {
            cout<<setprecision(8)<<sqrt(v[i].first)<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';
    return 0;


}
