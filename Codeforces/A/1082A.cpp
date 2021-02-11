#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n , x, y, d , j = 1e9 + 5, i = 1e9 + 5, q = 1e9 + 5;
        bool pk = 0;
        cin >> n >> x >> y >> d;
        ll p = y - x;
        if(p % d == 0)
        {
           // cout<<abs(p/d)<<'\n';
           j = abs(p / d);
        }
        else{
            bool is = 0, ok = 0;
            if((y - 1)%d == 0 )
            {
                is = 1;
                ll r = (x/d) + ((x % d == 0) ? 0 : 1);
                 q = r + (y - 1)/d;
                //cout<<abs(q)<<'\n';
            }
            if((n - y)%d == 0)
            {
                 ok = 1;
                 ll s = (n - x)/d + ((n - x) %d == 0 ? 0 : 1) ;
                  i = s + (n - y)/d;
                 //cout<<abs(i)<<'\n';

            }
            else if(!is && !ok){
                pk = 1;
                cout<<-1<<'\n';
            }

        }
        if(!pk){
         cout<<min(abs(i) , min(abs(q), j))<<'\n';
        }
    }
    return 0;
}
