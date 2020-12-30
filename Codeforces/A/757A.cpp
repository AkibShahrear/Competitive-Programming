#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int B=0,u=0,l=0,b=0,a=0,p=0,r=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
        {
            B++;
        }
        else if(s[i]=='u')
        {
            u++;
        }
        else if(s[i]=='l')
        {
            l++;
        }
        else if(s[i]=='b')
        {
            b++;
        }
        else if(s[i]=='a')
        {
            a++;
        }
        else if(s[i]=='s')
        {
            p++;
        }
        else if(s[i]=='r')
        {
            r++;
        }
    }
    u/=2;
    a/=2;
    cout<<min(B,min(u,min(l,min(b,min(p,min(a,r))))));
}
