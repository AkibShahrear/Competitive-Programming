#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int t;
cin >> t;
while(t--)
{
    long long n;
    cin >> n;
    if(n < 2020)
    {
        cout<<"NO\n";
    }
    else{
    int p = n % 2020;
    long long k = p * 2021;
  //  cout<<"p: "<<p <<" k: "<<k<<'\n';
    long long q = n - k;
    if(q % 2020 == 0 && n >= 2020 && q >= 0)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
}

  return 0;
}

