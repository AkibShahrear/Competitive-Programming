#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int n;
map<string, int>mp;

inline void read(){
cin >> n;
for(int i = 0; i < n ; i++){
string s;
int c;
cin >> c >> s;
sort(s.begin() ,s.end());
if(mp.count(s) == 0)
{
    mp[s] = c;
}
else{
    mp[s] = min(mp[s] , c);
}
}
}

inline int getC(string a , string b)
{
    if(!mp.count(a) || !mp.count(b)){
        return INF;
    }
    return mp[a] + mp[b];
}
inline void solve(){
int ans = INF;
if(mp.count("A") && mp.count("B") && mp.count("C"))
{
    ans = mp["A"] + mp["B"] + mp["C"];
}
if(mp.count("ABC")){
    ans = min(ans , mp["ABC"]);
}
ans = min(ans , getC("AB" , "C"));
ans = min(ans , getC("A" , "BC"));
ans = min(ans , getC("AC" , "B"));
ans = min(ans , getC("AB" , "BC"));
ans = min(ans , getC("AC" , "BC"));
ans = min(ans , getC("AC" , "AB"));
if(ans == INF)
{
    ans = -1;
}
cout << ans;
}
int main()
{
    read();
    solve();

}
