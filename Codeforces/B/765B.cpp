#include<bits/stdc++.h>
using namespace std;
int a[30];
int main()
{
    string s;
    cin>>s;
   char c = 'a';
   for(int i = 0; i<s.size(); ++i)
   {
       if(s[i] > c)
       {
           cout<<"NO\n";
           return 0;
       }
       else if(s[i] == c)
       {
           ++c;
       }
   }
   cout<<"YES";
   return 0;
}
