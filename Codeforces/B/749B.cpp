#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int a , b, c, d, e ,f;
cin >> a >> b >> c >> d >> e >> f;
cout<<3<<'\n';
cout<<e + c - a<<" "<<f + d - b<<'\n';
cout<<e + a - c<<" "<<f + b - d <<'\n';
cout<<a + c - e<<" "<<b + d - f<<'\n';

    return 0;
}
