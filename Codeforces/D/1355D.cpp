#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n , s;
    cin >> n >> s;
    int p = n - 1;
    int q = s - p;
    if(q < p + 2)
    {
        cout<<"NO\n";
        return;
    }
    else{
        cout<<"YES\n";
        for(int i = 0; i < n - 1; i++)
        {
            cout<<1<<' ';
        }
        cout<<q<<'\n';
        cout<<p + 1<<'\n';
        return;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
