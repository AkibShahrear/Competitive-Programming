#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
char s[N];
int cnt[5];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(cnt, 0 ,sizeof(cnt));
        scanf("%s",s + 1); int l = strlen(s + 1);
        int n = 1, ans = 2e5 + 5;
        for(int i = 1; i <= l; i++)
        {
            ++cnt[s[i] - '0'];
            while(cnt[s[n] - '0'] >= 2){
                --cnt[s[n] - '0'];
                ++n;
            }
            if(cnt[1] && cnt[2] && cnt[3]) ans = min(ans, i - n + 1);
        }
        if(ans == N) ans = 0;
        cout<<ans<<'\n';
    }
}
