#include<bits/stdc++.h>
using namespace std;
vector<char>v;
int main()
{
    string s;
    cin >> s;
    int cnt = 0,n = s.length();
    for(auto i : s)
    {
        if(!v.empty() && v.back() == i)
            cnt++, v.pop_back();
        else
            v.push_back(i);
    }
    cout<< ((cnt & 1)?"Yes\n":"No\n");
    return 0;
}
