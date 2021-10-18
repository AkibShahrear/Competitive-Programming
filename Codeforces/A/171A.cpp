#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int >pi;
typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a , b;
    cin >> a >> b;
    ll c = 0;
    while(b)
    {
        c = (c * 10) + (b % 10);

        b /= 10;
    }
    cout<<a + c;


}
