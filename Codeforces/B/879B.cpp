#include<bits/stdc++.h>
using namespace std;
long long a[1000], mx;
int main()
{
   long long n , k;
   cin >> n >> k;
   if(k >= n)
   {
       cout<<n;
       return 0;
   }
   long long cnt = 0;
   for(int i = 1; i <= n; ++i)
   {
       cin >> a[i];
       if(cnt >= k) break;
       if(mx > a[i]) cnt++;
       else{
        cnt = 0;
        if(mx != 0) cnt++;
        mx = a[i];
       }
   }
   cout << endl<<mx;
    return 0;
}
