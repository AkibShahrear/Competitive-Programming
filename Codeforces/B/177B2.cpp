#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
bool isprime(ll n)
{
 for(int i = 2; (i * i) <= n; i++)
 {
     if(n%i == 0)
     {
         return 0;
     }
 }
 return 1;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    if(isprime(n))
    {
        cout<<n + 1;
        return 0;
    }
    ll j = 1;
    ll sum = n;
    while(n)
    {
        j++;
        if(n % j == 0)
        {
            n /= j;
            sum += n;
            j = 1;
            if(n == 1)
            {
            break;
            }
        }

    }
    cout<<sum<<'\n';

    return 0;
}
