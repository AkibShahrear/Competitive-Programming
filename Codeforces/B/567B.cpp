#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int>mp;
void solve()
{
    int t;
    cin >> t;
    int cap = 0, cnt = 0;
    while(t--)
    {
        int a;
        char c;
        //scanf("%c %d",&c,&a);
        cin >> c;
        cin >> a;
        if(c == '+')
        {
            mp[a] = 1;
            cnt++;
            cap = max(cap , cnt);
        }
        if(c == '-')
        {
            if(mp[a] == 1)
            {
                cnt--;
                mp[a] = 0;
            }
            else{
                cap++;
            }
        }
    }
    cout<<cap;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
