/*
n x m rectangular matrix a is increasing
if for each row of i when we go left
to right the value strictly increase
for each column when go from top to
bottom the value increase
replace 0

*/
#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int main()
{
   int n , m;
   cin >> n >> m;
   int sum = 0;
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < m; j++)
       {
           cin >> a[n - i - 1][m - j - 1];
       }
   }
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < m; j++)
       {
           if(a[i][j] == 0)
           {
               a[i][j] = 10000;
               if(i > 0) a[i][j] = min(a[i][j],a[i - 1][j] - 1);
               if(j > 0) a[i][j] = min(a[i][j],a[i][j - 1] - 1);
           }
           if(i > 0 && a[i][j] >= a[i - 1][j] ){cout<< -1; return 0;}
           if(j > 0 && a[i][j] >= a[i][j - 1]){cout<<-1; return 0;}
       sum += a[i][j];
       }
   }
    cout<<sum<<'\n';
    return 0;
}
