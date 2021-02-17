#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>o,c;
    int l = 0 , r = s.size() - 1;
    while(l < r){
        while(l < s.size() && s[l] ==')')
        {
            l++;
        }
        while(r >= 0 && s[r] == '(')
        {
            r--;
        }
        if(l < s.size() && r >= 0 && l < r)
        {
        o.push_back(l + 1);
        c.push_back(r + 1);
        l++;
        r--;
        }
    }
    if(o.empty())
    {
        cout<<0;
        return 0;
    }
    cout<<1<<'\n';
    cout<<2*o.size()<<'\n';
    for(auto x : o)
    {
        cout << x<<" ";
    }
    reverse(c.begin() , c.end());
    for(auto x : c)
    {
        cout<<x<<" ";
    }
}
