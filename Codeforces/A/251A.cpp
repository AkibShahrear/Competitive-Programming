#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve(){
int n;
ll d;
cin >> n >> d;
vi a(n);
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
int i = 0 , j = 0;
ll sum = 0;
for(int i = 0; i < n; i++)
{
    while(a[i] - a[j] > d) j++;
    sum += (ll)(i - j)*(i - j - 1)/2;
}
cout<<sum<<'\n';
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
