#include<bits/stdc++.h>
using namespace std;
long long a[10000],b[10000],x[10000],y[10000];
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> >p(n),q(n);
    for(int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> q[i].first >> q[i].second;
    }
   sort(p.begin() , p.end());
   sort(q.begin(), q.end());
   reverse(q.begin() , q.end());
  // cout<<q[0].first<<" "<<q[0].second<<'\n';
   vector<pair<int , int> >v(n);
   for(int i = 0 ;i < n; i++) v[i] = {p[i].first + q[i].first , p[i].second + q[i].second};
   sort(v.begin(),v.end());
   cout<<v[0].first<<' '<<v[0].second<<endl;
}
