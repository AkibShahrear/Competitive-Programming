#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long n;
    cin>>n;
    if(s.length()<n)
    {
        cout<<"impossible";
        return 0;
    }
    set<char>p;
    for(int i=0;i<s.length();i++)
    {
        p.insert(s[i]);
    }
    long long k=n-p.size();
    if(k<0)
    {
        cout<<0;
    }
    else{
        cout<<k;
    }

}
