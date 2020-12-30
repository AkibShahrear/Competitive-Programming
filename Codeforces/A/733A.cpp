#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

   while(cin>>s)
   {
       int m=0;
       int l=-1;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
           {
               m=max(m,i-l);
               l=i;
           }
       }
       int p=s.length()-l;
       m=max(m,p);
       cout<<m<<'\n';
   }

return 0;
    }


