#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

map<int , int> mp;
void solve()
{
int n , k;
cin >> n >> k;
int c;
cin >> c;
int mx = 0;
for(int i = 0; i < c; i++)
{
    int x;
    cin >> x;
    mp[x] = 1;
}
int cnt = 0;
int j = k;
for(int i = 1; i <= n; i++)
{
    if(mp[i])
    {
        cnt++; j = i + k;
    }
    else{
        if(i == j)
        {
            cnt++, j = i + k;
        }
    }
}

cout<<cnt;
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
