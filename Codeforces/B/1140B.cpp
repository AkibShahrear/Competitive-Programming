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
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '>')
            {
                cnt = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0 ;i--)
        {
            if(s[i] == '<')
            {
                cnt = min(cnt , n - i - 1);
                break;
            }
        }
        cout<<cnt<<'\n';

    }
    return 0;
}
