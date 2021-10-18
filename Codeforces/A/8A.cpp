#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s , a , b;
    cin >>s >> a >> b;
    int l = a.length();
    int m = b.length();
    int n = s.length();
    string r = s;
    for(int i = 0; i < n/2; i++)
    {
        swap(r[i] , r[n - i - 1]);
    }
   // cout<<r;
    bool is = 0, ok = 0;
    int pos = 0;
    for(int i = 0; i < n - l + 1; i++)
    {
        string p = s.substr(i , l);
        //cout<<"i: "<<i<<'\n';
        //cout<<"p: "<<p<<'\n';
        if(p == a)
        {
            pos = i + l - 1;
            is = 1;
            break;
        }
    }
    for(int i = pos + 1; i < (n - m + 1) ; i++)
    {
        string p = s.substr(i , m);
        //cout<<"new i: "<<i<<'\n';
        //cout<<"new p: "<<p<<'\n';
        if(p == b)
        {
            ok = 1;
            break;
        }
    }
     bool cnt = 0, pnt = 0;
    int ps = 0;
    for(int i = 0; i < (n - l + 1); i++)
    {
        string p = r.substr(i , l);
       // cout<<"back p: "<<p<<'\n';
        if(p == a)
        {
            ps = i + l - 1;
            cnt = 1;
            break;
        }
    }
    for(int i = ps + 1; i < (n - m + 1); i++)
    {
        string p = r.substr(i , m);
        //cout<<"back new p: "<<p<<'\n';
        if(p == b)
        {
            pnt = 1;
            break;
        }
    }
    if(cnt == 1 && pnt == 1 && is == 1 && ok == 1)
    {
        cout<<"both";
    }
    else if(is == 1 && ok == 1)
    {
        cout<<"forward";
    }
    else if(cnt == 1 && pnt == 1)
    {
        cout<<"backward";
    }
    else{
        cout<<"fantasy";
    }

}
