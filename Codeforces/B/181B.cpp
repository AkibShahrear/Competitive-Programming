#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define pb push_back
#define odd(a) ((a)&1)
map< pi , int> mp;
int a[11111],b[11111],x[3222][3222];
void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        x[a[i] + 1111][b[i] + 1111]++;
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++) for(int j = i + 1; j < n; j++){
        if(odd(a[i] + a[j]) || odd(b[i] + b[j]))continue;
        cnt += x[(a[i] + a[j])/2 + 1111][(b[i] + b[j])/2 + 1111];

    }
    cout<<cnt;
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);

solve();

return 0;
}
