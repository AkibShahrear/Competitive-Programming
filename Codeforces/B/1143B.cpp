#include<bits/stdc++.h>
using namespace std;
long long fn(int a, int b)
{
    long long sum = 1;
   for(int i = 1; i <= b; i++)
   {
       sum = sum * a;
   }
    return sum;
}
int main()
{
 long long n ,  sum = 1 , d = 1;
 string s;
  cin >> s;
  n = s.length();
  sum = fn(9 , n - 1);
  for(int i = 0; i < n; i++)
  {
      sum = max(sum, d * fn(9 - i - 1)*(s[i] - '1'));
      d = d*(a[i] - ' 0');
  }
cout<<max();
    return 0;
}
