/*
4=0100
7=0111
------
&=0100 ==>4
4=0100 x(+)y = _xy+xy_
7=0111
------
&=0011 ==>3
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin>> n;
        int cnt[30] = {};
        vector<long long>a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        for(int j = 29 ; j >= 0; j--)
        {
            long long cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(a[i] >= (1 << j) && a[i] <(1<<(j + 1)))
                {
                    cnt++;
                }
            }
            ans += cnt*(cnt - 1)/2;
        }
    cout << ans << '\n';


    }
    return 0;
}
