/*<protocol>://<domain>.ru[/context]
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int i = 0;
  if(s[0] == 'h')
  {
      cout<<"http://";
      i += 4;
  }
  else if(s[0] == 'f')
  {
      cout<<"ftp://";
      i += 3;
  }
  int l = i;
  string p ="";
  while(i)
  {

      if(s[i] == 'r' && s[i + 1] == 'u')
      {
          if(i!=l){
          i+=2;
          break;
          }
          else{
            p += s[i];
            i++;
          }
      }

      else{
        p += s[i];
         i++;
      }


  }
  cout<<p;
  //cout<<i<<'\n';
  if(i == s.length())
  {
      cout<<".ru";
  }
  else{
     cout<<".ru/";
  for( i ; i < s.length() ; i++)
  {
      cout<<s[i];
  }
  }


    return 0;
}
