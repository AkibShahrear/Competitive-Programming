#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
ll gcd(ll a , ll b)
{
    if(a%b == 0) return b;
    else{
        return gcd(b , a%b);
    }
}
bool isprime(ll a)
{
    for(int i = 2; i * i <= a; i++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
ll a , b;
cin >> a >> b;
ll g = gcd(a , b);
a /= g;
b /= g;
if(a == b)
{
    cout<<0;
    return;
}
ll n = a;
int cnt = 0;
while(true)
{
    if(n == 1)
    {
        break;
    }
    if(n%2 == 0)
    {
        n /= 2;
        cnt++;

    }
    else if(n%3 == 0)
    {
        n /= 3;
        cnt++;

    }
    else if(n%5 == 0)
    {
        n /= 5;
        cnt++;

    }
    else{
        cout<<-1;
        return;
    }
}
ll p = b;
//cout<<"p: "<<p<<'\n';
while(true)
{
    if(p == 1)
    {
        break;
    }
    if(p%2 == 0)
    {
        p /= 2;
        cnt++;
    }
    else if(p%3 == 0)
    {
        p /= 3;
        cnt++;
    }
    else if(p%5 == 0)
    {
        p /= 5;
        cnt++;
    }
    else{
        cout<<-1;
        return;
    }
}
cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
