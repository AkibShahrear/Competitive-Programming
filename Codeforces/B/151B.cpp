#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string  s[200];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    map<string , int> tmp, pmp, gmp;
    int mxt = 0, mxp = 0, mxg = 0;
    for(int j = 0; j < t; j++)
    {
        int n ;
        cin >> n >> s[j];
        int a = 0, b = 0, c = 0;
        for(int i = 0; i < n; i++)
        {
            string p;
            cin >> p;
            int q = p[0] - '0';
            int r = p[1] - '0';
            int u = p[3] - '0';
            int v = p[4] - '0';
            int x = p[6] - '0';
            int y = p[7] - '0';
            if(q == r && r == u && u == v && v == x && x == y)
            {
                a++;
            }
            else if(q > r && r > u && u > v && v > x && x > y)
            {
                b++;
            }
            else{
                c++;
            }
        }
        if(n != 0){
        tmp[s[j]] = a;
        }
        if(n != 0){
        pmp[s[j]] = b;
        }
        if(n != 0){
        gmp[s[j]] = c;
        }
        if(a > mxt)
        {
            mxt = a;
        }
        if(b > mxp)
        {
            mxp = b;
        }
        if(c > mxg)
        {
            mxg = c;
        }
    }
 cout<<"If you want to call a taxi, you should call: ";
 int tnt = 0;
 for(int i = 0; i < t; i++)
 {
     if((tmp[s[i]]) == mxt)
      {
          if(tnt == 0){
          cout<<s[i];
          tnt++;
          }
          else {
            cout<<", "<<s[i];
          }
      }
 }
cout<<'.'<<'\n';
cout<<"If you want to order a pizza, you should call: ";
int cnt = 0;
 for(int i = 0; i < t; i++)
 {
     //cout<<"mxp: "<<mxp<<" pmp[s[i]]: "<<pmp[s[i]]<<'\n';
     if((pmp[s[i]]) == mxp)
      {
          if(cnt == 0){
          cout<<s[i];
          cnt++;
          }
          else {
            cout<<", "<<s[i];
          }
      }
 }
cout<<'.'<<'\n';
cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
int pnt = 0;
 for(int i = 0; i < t; i++)
 {
     if((gmp[s[i]]) == mxg )
      {
          if(pnt == 0){
          cout<<s[i];
          pnt++;
          }
          else {
            cout<<", "<<s[i];
          }
      }
 }
cout<<'.'<<'\n';

}
