/*
occ(num)
occ(v) > occ(v')

*/
#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = n + 1;
        map<int,int>seen;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(seen.count(a[i]))
                ans = min(ans , i - seen[a[i]] + 1);
            seen[a[i]] = i;
        }
        if(ans == n + 1)
            ans = -1;
        cout<<ans<<'\n';
    }
    return 0;
}
