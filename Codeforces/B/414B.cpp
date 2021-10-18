#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
ll m = 1e9 + 7;
int dp[2002][2002];

void solve()
{
int n , k;
cin >> n >> k;
dp[0][1] = 1;
for(int i = 0; i < k; i++){
  for(int j = 1; j <= n; j++){
    for(int k = j; k <= n; k += j){
      cout<<"i + 1: "<<i + 1<<" k: "<<k<<'\n';
      dp[i + 1][k] = (dp[i + 1][k] + dp[i][j])%m;
      cout<<"dp[i + 1][k]: "<<dp[i + 1][k]<<'\n';
    }
  }
}
int sum = 0;
for(int i = 1; i <= n; i++)
   sum = (sum + dp[k][i])%m;
cout<<sum;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
