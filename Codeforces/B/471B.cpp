#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
int n;
cin >> n;
vi a(n),b(n);
map<int , int>mp;
vector<pi>v;
set<int>s;
for(int i = 0; i < n; i++)
{
    cin >> a[i];
    s.insert(a[i]);
    mp[a[i]]++;
    b[i] = a[i];
    v.push_back({a[i] , i + 1});
}
int l = s.size();
if(n - 2 >= l)
{
    cout<<"YES\n";
    sort(v.begin() , v.end());
    vi c(n);
    for(int i = 0; i < v.size(); i++)
    {
        c[i] = v[i].second;
        cout<<v[i].second<<' ';
    }
    cout<<'\n';
    int p = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int r = v[i].first;
        if(mp[r] >= 2)
        {
            p = i;
            swap(c[i], c[i + 1]);
            break;
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
      cout<<c[i]<<" ";
    }
    cout<<'\n';

    int i = 0;
    if(mp[v[p].first] > 2)
    {
        p = p;
    }
    else{
        p = p + 2;
    }
    //cout<<"1p: "<<p<<'\n';
    bool is = 1;
    //cout<<"c[i]: "<<p<<'\n';
    for(i = p ; i < v.size(); i++)
    {
        int r = v[i].first;
        if(mp[r] > 2)
        {
           // cout<<"r: "<<r<<'\n';
            swap(c[i], c[i + 2]);
            break;
        }
        else if(mp[r] >= 2)
        {
            //cout<<"r: "<<r<<'\n';
            swap(c[i], c[i + 1]);
            break;
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
      cout<<c[i]<<" ";
    }
    cout<<'\n';
}
else{
    cout<<"NO";
}
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
