#include<bits/stdc++.h>
using namespace std;
isprime(int n)
{
    for(int i = 2; i*i <= n; i++)
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
    int t;
    cin >> t;
    long long p = 0 , r = 0;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = n + 1; ;i++)
        {
            if(isprime(i))
            {
                p = i;
                break;
            }
        }
        long long q = p;
        for(int i = q + n; ; i++)
        {
            if(isprime(i))
            {
                r = i;
                break;
            }
        }
        cout<<min((1ll *q*r),(1ll * q * q * q))<<'\n';
    }
}
