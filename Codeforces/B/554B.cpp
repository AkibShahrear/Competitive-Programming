#include<bits/stdc++.h>
using namespace std;
int a[200][200];
string s[200];
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0 ; i < n; i++)
    {
        cin >> s[i];
    }
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        string t = s[i];


            int cnt  = 1;
            for(int j = 0; j < n; j++)
            {
                if(i != j)
                {
                    if(t == s[j])
                    {
                        cnt++;
                    }
                }
            }
            mx = max(mx , cnt);
        }

    cout<<mx;
    return 0;
}
