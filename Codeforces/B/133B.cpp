#include<bits/stdc++.h>
using namespace std;
#define mod 1000003
int main()
{
    string s;
    cin>>s;

    int l=s.length();
    long long sum=0;
    for(int i=0;i<l;i++)
    {
        sum*=16;
        if(s[i]=='>')
        {
            sum+=8;
        }
        else if(s[i]=='<')
        {
            sum+=9;
        }
        else if(s[i]=='+')
        {
            sum+=10;
        }
        else if(s[i]=='-')
        {
            sum+=11;
        }
        else if(s[i]=='.')
        {
            sum+=12;
        }
        else if(s[i]==',')
        {
            sum+=13;
        }
        else if(s[i]=='[')
        {
            sum+=14;
        }
        else if(s[i]==']')
        {
            sum+=15;
        }
        sum%=mod;

    }
    cout<<sum;
}
