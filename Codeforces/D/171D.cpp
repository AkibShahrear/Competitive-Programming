#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define pb push_back

void solve()
{
    int n;
    cin >> n;
    if(n == 5)
    {
        cout<<1;
        return;
    }
    else{
    cout<<(n%3) + 1;
    }
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
//Akib
