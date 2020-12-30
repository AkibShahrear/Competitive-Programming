#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool b=false;
    int n;
    cin>>n;
    string s[n];
    int cnt=0,t;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if((!b) && (s[i].find("OO")+1))
        {
            s[i].replace(s[i].find("OO"),2,"++");
            b=true;
        }
    }
    if(!b)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        for(int i=0;i<n;++i)
        {
            cout<<s[i]<<'\n';
        }

    }
}

