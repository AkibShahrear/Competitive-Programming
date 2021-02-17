#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];
int main()
{
    int n , m;
    cin >> n >> m;
    long long sum = n * n;
    vector< pair<int ,int > >v;
   long long p ,q;
   p = n; q = n;
   for(int i = 0; i < m; i++)
   {
       int x , y;
       cin >> x >> y;
       if(!a[x])
       {
           a[x] = 1;
           p--;
       }
       if(!b[y])
       {
           b[y] = 1;
           q--;
       }
       if(i == 0)
       {
           printf("%I64d",p * q);
       }
       else{
        printf(" %I64d",p * q);
       }
   }
return 0;
}
