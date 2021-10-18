#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

map<int , int>sp,tp;
void solve()
{
    string s,t;
    cin >> s >> t;
    for(int i = 0; i < s.length(); i++)
    {
        int p = s[i] - '0';
        sp[p]++;
    }
    for(int i = 0; i < t.length(); i++)
    {
        int p = t[i] - '0';
        tp[p]++;
    }
    for(int i = 0; i < t.length(); i++)
    {
        int p = t[i] - '0';
        if(tp[p] > sp[p])
        {
            cout<<"need tree";
            return;
        }
    }
    int cnt = 0, j = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == t[j])
        {
            j++;
            cnt++;
        }
    }
    if(cnt != t.length())
    {
        if(s.length() > t.length())
        {
            cout<<"both";
            return;
        }
        else{
            cout<<"array";
            return;
        }
    }
    else{
        cout<<"automaton";
        return;
    }
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
