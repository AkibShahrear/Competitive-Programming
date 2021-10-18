#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int sign(double x) {
 if (fabs(x) < 1e-8){
    return 0;
 }
 return x > 0 ? 1 : -1;
}
void solve()
{
int r , x , y, x1 , y1;
cin >> r >> x >> y >> x1 >> y1;
double p = ((x1 * 1.0 - x)*(x1 * 1.0 - x)) + ((y1 * 1.0 - y)*(y1 * 1.0 - y));
p = sqrt(p);
int cnt = 0;
while(sign(p) > 0)
{
    p -= (2*r);
    cnt++;
}
cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}

