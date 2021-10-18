#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;


void solve()
{
map<int , int> mp;
int n;
cin >> n;
vi a(n),v,r;
int mx = 0;
for(int i = 0; i < n; i++)
{
    cin >> a[i];
    mx = max(mx , ++mp[a[i]]);
}
cout<<max(mx*2 - n , n%2)<<'\n';
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;

    while(t--){

    solve();

    }
    return 0;
}
