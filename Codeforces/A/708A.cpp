#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin >> s;
   int n = s.length();
   bool is = 0, ok = 0;
   for(int i = 0; i < n; i++)
   {
       if(s[i] != 'a')
       {
           ok = 1;
       }
   }
   if(!ok)
   {
       s[n - 1] = 'z';
       cout<<s;
       return 0;
   }
   char p = s[0];
   for(int i = 0; i < n; i++)
   {

       if(p == 'a')
       {
           //cout<<"hi";
           int r = 0;
           int l = n + 2;
        for(int j = 1; j < n; j++){
            if(s[j] != 'a')
           {
              l = j;
              s[j] = s[j] - 1;
              //cout << "s[j]: "<< s[j]<<'\n';
           }
           else if(j > l && s[j] == 'a')
           {
               r = 1;
               break;
           }
           }
         break;
       }
       if(i != 0 && s[i] == 'a')
       {
           is = 1;
           break;
       }
       if(s[i] != 'a' )
       {
           s[i] = s[i] - 1;
           //cout<<s[i];
       }
   }
   cout<<s;

   return 0;
}
