#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
string s[210];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w, h;
    cin >> w >> h;
    for(int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    for(int j = 0;j < w; j++)
    {
        for(int i = 0 ; i < h; i++)
        {
            cout<<s[i][j]<<s[i][j];
        }
        cout<<'\n';
        for(int i = 0 ; i < h; i++)
        {
            cout<<s[i][j]<<s[i][j];
        }
        cout<<'\n';
    }

    return 0;
}
