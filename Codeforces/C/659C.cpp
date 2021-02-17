#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
set<int>s;
int main()
{
    vector<int>v;
    long long n , m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
   for(int i = 1; m ; i++)
   {
       if(s.count(i)) continue;
       if(m >= i) v.push_back(i), m -= i;
       else break;
   }
   cout<<v.size()<<'\n';
   for(int i = 0; i < v.size(); i++)
   {
       cout<<v[i]<<" ";
   }


}
