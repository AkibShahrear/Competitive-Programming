#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int l1=s.length(),l2=t.length();
    if(l1!=l2)
    {
        cout<<"No";
    }
    else{
            bool is=0;
        for(int i=0;i<l1;i++)
        {
            if(s[i]!=t[i])
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {

                     if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
                     {
                         //cout<<"s[i]: "<<s[i]<<"\nt[i]: "<<t[i]<<'\n';
                         is=1;

                     }
                     else{
                         cout<<"No";
                         return 0;
                     }
                }
                else{
                      if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
                     {
                         cout<<"No";
                         return 0;
                     }
                }
            }
        }
        cout<<"Yes";
    }
}
