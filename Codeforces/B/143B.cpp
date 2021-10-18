#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int i = 0;
    if(s[0] == '-')
    {
        i = 1;
    }
    string p = "";
    int j = 0 , r = s.length() - 1;
    for(int k = i; k < s.length(); k++)
    {
        if(s[k] == '.')
        {
            r = k - 1;
            break;
        }
    }
    for(int k = r; k >= i; k--)
    {
        j++;
        p += s[k];
        //cout<<"k: "<<k<<'\n';
        if(j % 3 == 0 && k != i)
        {
            p += ',';
        }
    }
    int l = p.length();
    p += '$';
    string q = "";
    int cnt  = 0;
    if(r == s.length() - 1)
    {
        q += ".00";
    }
    else if( (s.length() - 1) - (r + 1) == 1)
    {
        q += '.';
        q += s[r + 2];
        q += '0';
    }
    else{
        q += s[r + 1];
        q += s[r + 2];
        q += s[r + 3];
    }
    if(s[0] == '-'){
    cout<<'(';
    for(int i = p.length() - 1; i >=0 ;i--)
    {
        if(p[i] != '-'){
        cout<<p[i];
        }
    }
    cout<<q;
    cout<<')';
    }
    else{
        for(int i = p.length() - 1; i >=0 ;i--)
    {

        cout<<p[i];
    }
    cout<<q;
    }
        return 0;
}
