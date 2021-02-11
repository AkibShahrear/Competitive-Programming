/*f(x) = (((x mod p1) mod p2)mod p3)mod p4
x in range [a;b] with property f(x) = x

input ==> p1,p2,p3,p4,a,b
output ==>
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int p1,p2,p3,p4,a,b;
  cin>>p1>>p2>>p3>>p4>>a>>b;
  int cnt = 0;
  for(int i = a;i <= b; i++)
  {
      int p = (((i % p1)% p2)% p3)% p4;
      if(p == i)
      {
          cnt++;
      }
  }
  cout << cnt;
    return 0;
}

