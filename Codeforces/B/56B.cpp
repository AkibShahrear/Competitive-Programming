#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    vi a, b, c;
    int l = 0 , r = 0;
    for(int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    bool is = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c.push_back(x);
        if(a[i] != x && !is)
        {
            l = i;
            is = 1;
        }
        if(a[i] != x)
        {
            r = i;
        }
    }
    //cout<<"l: "<<l<<" r: "<<r<<'\n';
    for(int j = 0; j < l; j++)
    {
        b.push_back(c[j]);
    }
    for(int j = r ; j >= l; j--)
    {
        //cout<<"a[j]: "<<a[j]<<'\n';
        b.push_back(c[j]);
    }
    for(int j = r + 1; j < n; j++)
    {
        b.push_back(c[j]);
    }
    int cnt = 0;
    for(int i = 0; i < b.size(); i++)
    {
        if(a[i] != b[i])
        {
            cnt = 1;
            break;
        }
    }
    if(cnt || l == 0 && r == 0)
    {
        cout<<0<<" "<<0<<'\n';
    }
    else{
        cout<<l + 1<<" "<<r + 1<<'\n';
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
