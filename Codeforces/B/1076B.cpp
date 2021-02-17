#include<bits/stdc++.h>
using namespace std;
long long isprime(long long n)
{
    for(long long  i = 2; i * i <= n; i++)
    {
        if(n%i == 0)
        {
            return i;
        }
    }
    return n;
}
int main()
{
    long long n;
    cin >> n;
    long long cnt = 0;
    if(n % 2 != 0)
    {
        n -= isprime(n);
        ++cnt;
    }
    cout<<cnt + n/ 2;
    return 0;

}
