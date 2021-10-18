#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int isprime(ll n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        ll cnt = 0;
       for(int i = 1; i<= 40000; i++)
       {
           if(n % i == 0){
             if(i <= k){
            cnt = max(cnt , 1LL*i);
             }

           if(n/i <= k){
            cnt = max(cnt , 1LL*n/i);
           }
           }
       }
       cout<<n/cnt<<'\n';
    }

    return 0;
}
