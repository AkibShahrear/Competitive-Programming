#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,int> pi;
ll gcd(ll a , ll b)
{
    if(a%b == 0) return b;
    else return gcd(b , a%b);
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
       cout<< 4LL*n / gcd(4 , n + 1) + 1<<endl;
    }

    return 0;
}
