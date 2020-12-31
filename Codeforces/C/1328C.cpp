/*long ternary number x
  leftmost digit 2
  c = a(.)b
  ci = (ai + bi)%3
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s,p ="1",q ="1";
        cin>>s;
        int l = 0;
       for(int i = 1; i < n; i++)
       {

             if(l)
           {
               if(s[i] == '2')
               {
                   p += '0';
                   q += '2';
               }
               else if(s[i] == '0')
               {
                   p += '0';
                   q += '0';
               }
               else if(s[i] == '1')
               {
                   p += '0';
                   q += '1';
               }
           }
           if(!l)
           {
               if(s[i] == '2')
               {
                   p += '1';
                   q += '1';
               }
               else if(s[i] == '0')
               {
                   p += '0';
                   q += '0';
               }
           else if(s[i] == '1')
           {
               l = 1;
               p += '1';
               q += '0';
           }
           }


       }

        cout<<p<<'\n'<<q<<'\n';
    }
}
