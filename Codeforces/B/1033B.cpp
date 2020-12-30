#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
    for(long long i = 2; i*i <= n; i++)
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
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a-b > 1)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        long long n=a+b;

        if(isprime(n))
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
