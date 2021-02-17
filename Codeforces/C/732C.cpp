#include<bits/stdc++.h>
using namespace std;
long long a[3];
int main()
{
   for(int i = 0; i < 3; i++)
   {
       cin >> a[i];
   }

    long long m = max(a[0] , max(a[1] , a[2])) , cnt = 0;
   for(int i = 0; i < 3; i++)
   {
       if(a[i] == m) continue;
       if((m - 1) - a[i] > 0)
       {
           cnt += (m - 1) - a[i];
       }
   }
   cout<<cnt;
   return 0;
}
