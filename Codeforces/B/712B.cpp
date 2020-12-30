#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,d=0,u=0,r=0;
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]=='L')
        {
            l++;
        }
        if(s[i]=='R')
        {
            r++;
        }
        if(s[i]=='U')
        {
            u++;
        }
        if(s[i]=='D')
        {
            d++;
        }
    }
    if(s.length()%2!=0)
    {
        cout<<-1;
    }
    else{
        cout<<(abs(u-d)/2.0)+(abs(l-r)/2.0);
    }
}
