/*n boys m girls
partner dancing skill must
differ by 1
*/
#include<bits/stdc++.h>
using namespace std;
int g[210],b[210];
int main()
{
 int n,m;
 cin>>n;
 for(int i = 0; i < n; i++)
 {
     cin >> g[i];
 }
 sort(g, g + n);
 cin>>m;
 for(int i = 0; i < m; i++)
 {
     cin >> b[i];
 }
 sort(b, b + m);
 int cnt = 0;
 for(int i = 0; i < n; i++)
 {
     for(int j = 0;j < m; j++)
     {
       //   cout << " g: "<<g[i]<<" b: "<<b[j]<<'\n';
         if(abs(g[i] - b[j]) <= 1)
         {

          g[i] = 200;
          b[j] = 500;
          cnt++;
          break;
         }
     }
 }
 cout<<cnt;
}
