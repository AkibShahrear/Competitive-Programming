#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string h,p;
        cin>>p;
        cin>>h;

         int l=p.length();

     sort(p.begin(),p.end());
     bool u=false;
     for(int i=0;i+int(p.length())<= int(h.length());i++)
     {
         string c=h.substr(i,int(p.length()));
         sort(c.begin(),c.end());
         if(p==c)
         {
             u=true;
         }
     }
     if(u)
     {
         cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }



     }
    }

