#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll p = 0;
    int cnt = 0;
    int j = 0;
    while(true)
    {
        if(v[j] >= p)
        {
            cnt++;
            p += v[j];
            j++;
            if(j == n)
            {
                break;
            }
        }
        else{
            j++;
            if(j == n)
            {
                break;
            }
        }

    }
    cout<<cnt<<'\n';
    return 0;
}
