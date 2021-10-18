#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
string s;
cin >> s;
int q;
cin >> q;
int n = s.length();
for(int i = 0; i < q; i++)
{
    int l, r , k;
    cin >> l >> r >> k;
    int m = (r - l) + 1;
    string p = s.substr(0 , l - 1);
     string c = s.substr(r , n);
    k %= m;
    int x = (m - k);
    string e = s.substr(l - 1 , m);
    reverse(e.begin(), e.end());
    string b = e.substr(0 , k);
    reverse(b.begin(), b.end());
    string v = s.substr(l - 1 , x);
    string d = b + v;
    p +=d;
    p += c;
    s = p;

}
cout<<s<<'\n';
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
