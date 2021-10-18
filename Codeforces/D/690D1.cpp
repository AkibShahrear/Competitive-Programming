#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string s[200];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int R , C;
    cin >> R >> C;
    for(int i = 0; i < R; i++)
    {
        cin >> s[i];
    }
    int cnt = 0;
    int l = R - 1;
    bool is = 0;
    for(int i = 0; i < C; i++)
    {//cout<<"s[l][i]"<<s[l][i]<<'\n';
        if(s[l][i] == 'B' && is == 0)
        {
            is = 1;
            cnt++;
        }
        else if(s[l][i] != 'B'){
            is = 0;
        }
    }
    cout<<cnt;
    return 0;
}
