#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
int n , k;
cin >> n >> k;
vi a(n);
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
sort(a.rbegin() , a.rend());
int sum = 0;
for(int i = 0; i < n; i += k)
{
    sum += 2*(a[i] - 1);
}
cout<<sum;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
