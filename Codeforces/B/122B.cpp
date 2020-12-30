#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int p=(s[i]-'0');
        if(p==4 || p==7)
        {
            t+=s[i];
        }
    }
    int f=0,se=0;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]=='4')
        {
            f++;
        }
        else{
            se++;
        }
    }
    if(f>se)
    {
        cout<<4;
    }
    else if(f<se)
    {
        cout<<7;

    }
    else if(f==0 && se==0){
        cout<<-1;
    }
    else{
        cout<<4;
    }
}
