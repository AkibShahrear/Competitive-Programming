#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
int main()
{
    int n , k;
    cin >> n >> k;
    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int p = 0;
    for(int i = k -1 ; i >= 1; i--)
    {
        if(v[i] != v[i - 1])
        {
            p = i;
            break;
        }
    }
   // cout<<"p: "<<p<<'\n';
    for(int i = k - 1; i < n - 1; i++)
    {
        if(v[i] != v[i + 1])
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<p;
    return 0;
}
