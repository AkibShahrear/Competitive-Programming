#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        bool cnt=false;
        if(s[0]=='?') s[0]=s[1]=='a'?'b':'a';
        for(int i=1;i<len;i++)
        {
            if(s[i]=='?')
            {
                for(char c='a';c<='c';c++)
                    if(s[i-1]!=c && s[i+1]!=c)
                     s[i]=c;
            }
            if(s[i]==s[i-1])
                {
                    cnt=true;
                }
        }
        if(cnt)
        {
            cout<<"-1\n";
        }
        else
        cout<<s<<'\n';

    }
}

