#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    if(n&1)
    {
        for(int i = 0; i < n; i++)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
        for(int i = 0; i < n; i++)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
        for(int i = 0; i < n; i++)
        {
            cout<<(2*i)%n<<" ";
        }
    }
    else{
        cout<<-1;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
