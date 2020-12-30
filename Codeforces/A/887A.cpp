#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int z=0,k=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            k=i;
            break;
        }
    }
    for(int i=k;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            z++;
        }
    }
    if(s.length()<7)
    {
        cout<<"no";
        return 0;
    }
    int o=0;
        for(int i=0;i<s.length()-6;i++)
    {
       if(s[i]=='1')
       {
           o++;
       }
    }
   // cout<<"z: "<<z<<" o: "<<o<<'\n';
    if(s.length()>6 && z>=6 && o>0 )
    {
        cout<<"yes";

    }
    else{
        cout<<"no";
    }
}
