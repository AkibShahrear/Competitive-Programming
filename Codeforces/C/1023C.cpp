#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    int p = n;
    for(int i = 1; i < n; i++)
    {
    if(p == k)
    {
        cout<<s;
        break;
    }
    if(s[i]==')')
    {
        p -= 2;
        s.erase(i - 1, 2);
        i -= 2;
       // cout<<"i: "<<i<<'\n';
    }
    }

    return 0;
}


