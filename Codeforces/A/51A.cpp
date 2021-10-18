#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
map<string , int>mp;
int cnt = 0, n = 0,t;
void solve()
{
    string a , b, c;
    cin >> a;
    cin >> b;
    if(t > 0){
    cin >> c;
    }
    a += b;
    if(mp[a] == 0)
    {
        //cout<<"a: "<<a<<'\n';
        cnt++;
        mp[a] = 1;
        string s = "";
        s += a[1];
        s += a[3];
        s += a[0];
        s += a[2];
        mp[s] = 1;
        string p = "";
        p += s[1];
        p += s[3];
        p += s[0];
        p += s[2];
        mp[p] = 1;
        string q = "";
        q += p[1];
        q += p[3];
        q += p[0];
        q += p[2];
        mp[q] = 1;
    }



}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> t;
    while(t--){
    solve();
    }
    cout<<cnt<<'\n';
    return 0;
}
