#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,int> pi;
map<int,int>mp;
int main()
{
    int a, b , m , r;
    cin >> a >> b >> m >> r;
    int p = r;
    int init = 100100, last = 0, cnt = 0;
    while(true)
    {
        cnt++;
        r = (a * r + b)%m;
        mp[r]++;
        if(mp[r] == 2)
        {
            init = min(init , cnt);
            last  = cnt;
        }
        if(mp[r] == 3)
        {
            break;
        }
    }
    cout<<last - init + 1<<'\n';

    return 0;
}
