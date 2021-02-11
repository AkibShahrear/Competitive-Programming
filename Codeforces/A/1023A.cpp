#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n , m;
cin >> n >> m;
string s, t, a = "" , b = "";
cin >> s >> t;
if(s == t)
{
    cout<<"YES\n";
    return 0;
}
int p = -1;
for(int i = 0; i < n; i++)
{

    if(s[i] == '*')
    {
    p = i;
    break;
    }
    else{
        a += s[i];
    }

}
for(int i = p + 1; i < n; ++i)
{
    b += s[i];
}
int k = a.length() , l = b.length();
if(p == -1)
{
    if(s != t)
    {
        cout<<"NO";
        return 0;
    }
}

//cout<<"k: "<<k<<" l: "<<l<<'\n';
if(k + l <= m)
{
//    cout<<t.substr(0, k)<<" and "<<t.substr(m - l , m)<<'\n';
    if(t.substr(0 , k) == a && t.substr(m - l, m ) == b)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}
else{
    cout<<"NO\n";
}
    return 0;
}
