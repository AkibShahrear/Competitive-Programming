#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long q = (9 * 90000000), s = 999999999;
  long long n , p = 0,t = 1,sum = 0;
    cin >> n;
    if(n < 10)
    {
        cout<<n<<'\n';
        return 0;

    }
   if(n > 9)
   {
       sum += 9;
       p = 9;
       t = 1;
   }
    if(n > 99)
   {
       sum += (2*90);
       p = 99;
       t = 2;
   }
    if(n > 999)
   {
       sum += (3*900);
       p = 999;
       t = 3;
   }
    if(n > 9999)
   {
       sum += (4 * 9000);
       p = 9999;
       t = 4;

   }
    if(n > 99999)
   {
       sum += (5 * 90000);
       p = 99999;
       t = 5;
   }
    if(n > 999999)
   {
       sum += (6 * 900000);
       p = 999999;
       t = 6;
   }
    if(n > 9999999)
   {
       sum += (7 * 9000000);
       p = 9999999;
       t = 7;
   }
    if(n > 99999999)
   {
       sum += (8 * 90000000);
       p = 99999999;
       t = 8;
   }
    if(n > s)
   {

       q *= 10;
       sum += q;
       p = 999999999;
       t = 9;
       t += 1;
      long long j = t * (n - p);
    sum += j;
    cout<<sum<<'\n';
    return 0;
   }
   else{
      t += 1;
    sum += (t * (n - p));
    cout<<sum<<'\n';
   }
    return 0;
}
