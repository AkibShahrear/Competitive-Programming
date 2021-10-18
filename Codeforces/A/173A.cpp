#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define pb push_back
const int N = (int) 1e6 + 10;
char a[N] , b[N];
bool win(char c1 , char c2){

return (c1 == 'R')&&(c2 == 'S') || (c1 == 'S') && (c2 == 'P') || (c1 == 'P') && (c2 == 'R');

}
void solve()
{
    ll n;
    cin >> n;
    //string a , b;
    cin >> a >> b;
    int l = strlen(a);
    int m = strlen(b);
    int p = l*m;
    int Nike = 0 , Poly = 0;
    for(int i = 0; i < p - l; ++i)
    {
        a[i + l] = a[i];
    }
    for(int i = 0; i < p - m; ++i)
    {
        b[i + m] = b[i];
    }
    for(int i = 0; i < p; ++i)
    {
        Poly += win(a[i] , b[i]) * n / p;
        Nike += win(b[i] , a[i]) * n / p;
        if(i < n % p)
        {
        Poly += win(a[i] , b[i]);
        Nike += win(b[i] , a[i]);
        }
    }
    cout<<Nike<<" "<<Poly;
}

int main(int argc ,  char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
