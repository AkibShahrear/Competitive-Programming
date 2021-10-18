#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,  int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m , x , c[130];
    cin >> n >> m;
    for(int i = 1; i <= m; ++i)
    {
        c[i] = 0;
    }
    for(int i = 1; i <= n; ++i){
        cin >> x;
        ++c[x];
    }
    x = 0;
    while(c[m] < n){
        ++x;
        for(int i = m - 1; i >= 1; --i){
          //  cout<<"i: "<<i<<'\n';
            if(c[i] > 0){
                ++c[i + 1];
                --c[i];
                cout<<"i: "<<i<<" c[i + 1]: "<<c[i + 1]<<" c[i]: "<<c[i]<<'\n';
            }
        }

    }
    cout<<x;
    return 0;
}
