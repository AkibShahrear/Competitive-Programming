/*
Alice:
rock a tmes
paper b times
scissor c times
Alice win atleast [n/2]
r>s
p>r
s>p
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
        cin>>n;
        int r,p,sc;
        cin >> r >> p >> sc;
        string s;
        cin >> s;
        int cnt = 0;
        int l = s.length();
        string pn = s;
        if(r > 0)
        {
            for(int i = 0;i < l; i++)
            {
                // for(int j = 0;j < l; j++)
                 //{
                    if(s[i] == 'S')
                    {
                        cnt++;
                        pn[i] = 'R';
                        r--;
                        if(r == 0)
                        {
                            break;
                        }
                    }
                 //}
            }
        }
         if(p > 0)
        {
            for(int i = 0;i < l; i++)
            {
                // for(int j = 0;j < l; j++)
                 //{
                    if(s[i] == 'R')
                    {
                        cnt++;
                        pn[i] = 'P';
                        p--;
                        if(p == 0)
                        {
                            break;
                        }
                    }
                 //}
            }
        }
         if(sc > 0)
        {
            for(int i = 0;i < l; i++)
            {
                // for(int j = 0;j < l; j++)
                 //{
                    if(s[i] == 'P')
                    {
                        cnt++;
                        pn[i] = 'S';
                        sc--;
                        if(sc == 0)
                        {
                            break;
                        }
                    }
                 //}
            }
        }
     for(int i = 0; i < l; i++)
     {
         if(pn[i] == s[i])
          {
              if(p > 0)
              {
                  pn[i] = 'P';
                  p--;
              }
              else if(r > 0)
              {
                  pn[i] = 'R';
                  r--;
              }
              else if( sc > 0)
              {
                  pn[i] = 'S';
                  sc--;
              }
          }
     }
     if(cnt >= (n + 1)/2)
     {
         cout<<"YES\n";
         cout<<pn<<'\n';
     }
     else{
        cout<<"NO\n";
     }
    }
    return 0;
}
