#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int mx = 0;
        string s(200,'x');
        cout<<s<<'\n';
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            s[a] = s[a] == 'x' ? 'y' : 'x';
            cout<<s<<'\n';
        }

    }
}
