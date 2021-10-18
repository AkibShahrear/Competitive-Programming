#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n , k , t;
    cin >> n >> k >> t;
    int p = (n*k*t)/100;
    int r = p%k;
    int s = p / k;
    //cout<<"s: "<<s<<'\n';
    for(int i = 0; i < s; i++)
    {
        cout<<k<<" ";
    }
    if(s<n){
    cout<<r<<" ";
    }
    for(int i = 0; i < (n - s - 1); i++)
    {
        cout<<0<<" ";
    }

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
