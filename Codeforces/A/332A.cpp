#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = s.length();
    //cout<<"l: "<<l<<'\n';
    int cnt = 0;
    for(int i = n; i < l; i += n)
    {
        //i %= n;
        //cout<<"s[i]: "<<s[i]<<'\n';
        //cout<<"s[i - 1]: "<<s[i - 1]<<'\n';
        //cout<<"s[i - 2]: "<<s[i - 2]<<'\n';
        //cout<<"s[i - 3]: "<<s[i - 3]<<'\n';
        if(s[i - 1] == s[i - 2] && s[i - 2] == s[i - 3] )
        {
            cnt++;
        }
    }
    cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
