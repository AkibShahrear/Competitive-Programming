#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    vector<int>v(k);
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ++v[x % k];
    }
    int ans  = v[0] / 2;
    if(k % 2 == 0) ans += v[k / 2] / 2;
    for(int i = 1; i < (k + 1)/ 2; ++i)
    {
     int j  = k - i;
     ans += min(v[i] , v[j]);
    }
    cout<<ans * 2;
}
