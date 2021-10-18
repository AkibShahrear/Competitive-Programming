#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int N = 1e5 + 20;
int k[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int c , t;
        cin >> c >> t;
        k[i] = k [i - 1] + c * t;
    }
    int j = 1;
    while(m--)
    {
        int x;
        cin >> x;
        while(k[j] < x)
        {
            j++;
        }
      cout<<j<<'\n';
    }
}
