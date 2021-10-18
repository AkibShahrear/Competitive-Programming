#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int interval = 0, p = 0, is = 0;
    vi pos;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            pos.push_back(i);
        }
    }
    interval = pos[1] - pos[0];
    for(int i = 1; i < pos.size(); i++)
    {
        if(pos[i] - pos[i - 1] != interval)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

}

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" ,stdout);
    solve();

    return 0;
}
