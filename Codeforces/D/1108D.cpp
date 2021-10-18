#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back

void solve()
{
int n;
cin >> n;
string s;
cin >> s;
int cnt = 0;
for(int i = 0; i < (n - 1); i++)
{
    if(s[i] == s[i + 1])
    {
        if(i + 2 < n)
        {
            if(s[i + 1] == s[i + 2])
            {
                if(s[i + 1] != 'R')
                {
                    s[i + 1] = 'R';
                    cnt++;
                }
                else if(s[i + 1] != 'G')
                {
                    s[i + 1] = 'G';
                    cnt++;
                }
                else if(s[i + 1] != 'B')
                {
                    s[i + 1] = 'B';
                    cnt++;
                }
            }
            else{
                if(s[i] == 'R' && s[i + 2] == 'B' || s[i] == 'B' && s[i + 2] == 'R')
                {
                    s[i + 1] = 'G';
                    cnt++;
                }
                else if(s[i] == 'R' && s[i + 2] == 'G' || s[i] == 'G' && s[i + 2] == 'R')
                {
                    s[i + 1] = 'B';
                    cnt++;
                }
                else if(s[i] == 'G' && s[i + 2] == 'B' || s[i] == 'B' && s[i + 2] == 'G')
                {
                    s[i + 1] = 'R';
                    cnt++;
                }
            }
        }
        else{
            if(s[i + 1] != 'R')
                {
                    s[i + 1] = 'R';
                    cnt++;
                }
                else if(s[i + 1] != 'G')
                {
                    s[i + 1] = 'G';
                    cnt++;
                }
                else if(s[i + 1] != 'B')
                {
                    s[i + 1] = 'B';
                    cnt++;
                }
        }
    }
}
cout<<cnt<<'\n';
cout<<s;

}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
