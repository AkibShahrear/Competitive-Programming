#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

vector<ll> v;
void solve(){
ll n;
cin >> n;
ll sum = 1;
for(ll i = 2; i * i <= n; i++)
{
    if(n%i == 0)
    {
       sum *= i;
       while(n%i == 0){
        n = n/i;
       }
    }
}
sum *= n;
cout<<sum<<'\n';
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
