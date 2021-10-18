#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int gcd(int x , int y)
{
    int  p = 0;
  for(int i = 1; i <= x && i <= y; ++i)
  {
      if(x % i == 0 && y % i == 0)
      {
          p = i;
      }
  }
  return p;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x , y;
    int a , b;
    cin >> x >> y >> a >> b;
    int i = 1;
    int lcm = x * y /gcd(x , y);
    int cnt = b/lcm - (a - 1)/lcm;
    cout<<cnt;

    return 0;
}
