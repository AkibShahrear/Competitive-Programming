#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int>s;
        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }
        int ans = 0;
        while(!s.empty()){
            int k = *s.rbegin();
            s.erase(k);
            if(k % 2 == 0)
            {
                ans++;
                s.insert(k / 2);
            }

        }
        cout << ans << '\n';
    }
}
