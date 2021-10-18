#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
ll fac(int n)
{
    ll sum = 1;
    for(int i = 2;i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
ll ncr(int n , int r)
{
    ll sum = 1;
    if(r > (n - r))
    {
        for(int i = r + 1; i <= n; i++)
        {
            sum *= i;
        }
        ll p = fac(n-r);
        return sum/p;
    }
    else{
        for(int i = n - r + 1; i <= n; i++)
        {
            sum *= i;
        }
        ll p = fac(r);
        return sum/p;
    }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s1, s2;
  cin >> s1 >> s2;
  int a = 0;
  for(int i = 0; i < s1.length(); i++)
  {
      if(s1[i] == '+')
      {
          a++;
      }
      else if(s1[i] == '-')
      {
          a--;
      }
  }
  double b = 0 , q = 0;
  for(int i = 0; i < s2.length(); i++)
  {
      if(s2[i] == '+')
      {
          b++;
      }
      else if(s2[i] == '-')
      {
          b--;
      }
      else if(s2[i] == '?')
      {
          q++;
      }
  }
  if(q == 0)
  {
      if(a == b)
      {
          cout<<"1.000000000000"<<'\n';
      }
      else{
        cout<<"0.000000000000"<<'\n';
      }
  }
  else{
  double cnt = 0, q_cnt = 0 , w = 1;
  for(int i = 0; i <= q; i++)
  {
      cnt += ncr(q , i);
      if(b + ((q - i) - i) == a)
      {
          q_cnt += ncr(q , i);
      }
  }
  //cout<<" cnt: "<<cnt<<" q_cnt: "<< q_cnt<<'\n';
  printf("%0.12lf",q_cnt/cnt);
  }
  return 0;
}
