#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const int N = 2000000;
ll mod = 1073741824;

int isp[N];
void solve()
{
    int a , b , c;
    scanf("%d%d%d",&a,&b,&c);
    memset(isp , 0, sizeof(isp));
    for(int i = 1; i <= (a*b*c); i++)
    {
            for(int j = i; j <= (a*b*c); j += i)
            {
                isp[j]++;
            }

    }

    int sum = 0;
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
           for(int k = 1; k <= c; k++)
            {

                int n = i*j*k;
                sum += isp[n];
                sum %= mod;

            }
    cout<<sum;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
