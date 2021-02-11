/* A list consisting of n last visited
by the user pages
inputted part s are known


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>p;
    string s;
    cin >> s;
    int l = s.length();
    int n;
    cin>>n;
    bool is = 0;
    for(int i = 0; i < n; i++)
    {
        string k,q;
        cin >> k;
        q = k.substr(0 , l);
        //cout<<q<<'\n';
        if(q == s)
        {
            is = 1;
            p.push_back(k);
        }
    }
    if(!is)
    {
        cout<<s;
        return 0;
    }
    sort(p.begin(),p.end());
    cout<<p[0];
    return 0;
}
