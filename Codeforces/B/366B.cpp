#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vi v(n + 1);
    int p = n/k;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    ll mn = 1e9;
    int pos = 0;
    for(int i = 1; i <= k; i++)
    {
        ll sum = 0;
        int r = p;
        for(int j = i;j <= n ; j += k)
        {
           // cout<<"j: "<<j<<'\n';
            sum += v[j];
            //cout<<"sum begin: "<<sum<<'\n';

        }
        //cout<<"sum: "<<sum<<'\n';
        if(sum < mn){
        mn = sum;
        pos = i;
        }
    }
    cout<<pos<<'\n';
    return 0;
}
