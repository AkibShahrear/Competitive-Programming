#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

void solve()
{
int n , m;
cin >> n >> m;
int d = 2*m - 2;
for(int i = 0; i < n; i++)
{
    int s , f , t;
    cin >> s >> f >> t;
    int p = t/d*d;
    if(s == f){cout<<t<<'\n'; continue; }
    if(s < f){
        if(p + (s - 1) < t) p += d;
        cout<<p + f - 1<<'\n';
    }
    else{
        p +=m-1;
        if(p + (m -s) < t) p += d;
        cout<<p + m - f<<'\n';
    }
}
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
