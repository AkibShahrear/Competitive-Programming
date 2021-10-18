#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
    int n ,  m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0 , p = 0, l = 0;
    set<int>s;
    for(int i = 0; i < m; i++){
    int t;
    cin >> t;
    if(t == 1)
    {
       /* if(l == 0)
        {
            s.clear();
        }*/
        ll v , x;
        cin >> v >> x;
        s.insert(v - 1);
        a[v - 1] = x - sum;
    }
    else if(t == 2)
    {
        l = 0;
        int y;
        cin >> y;
        sum += y;
    }
    else if(t == 3)
    {
        int q;
        cin >> q;
        cout<<a[q - 1] + sum <<'\n';
    }

    }
}
