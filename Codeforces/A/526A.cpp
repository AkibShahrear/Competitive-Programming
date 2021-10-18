#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = 200;
    int q = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '*')
        {
            p = min(i , p);
            q++;
        }
    }
    //cout<<"q: "<<q<<'\n';
    if(q < 5)
    {
        cout<<"no";
        return;
    }

    for(int i = p; i < s.length(); i++)
    {
        if(s[i] == '*'){
        for(int j = 1; j <= n; j++)
        {
            int cnt = 0;
            for(int k = i; k <= n; k += j)
            {
                if(s[k] == '*')
                {
                    //cout<<"k: "<<k<<'\n';
                    cnt++;
                    if(cnt == 5)
                    {
                        //cout<<"j: "<<j<<'\n';
                        cout<<"yes";
                        return;
                    }
                }
                else{
                    break;
                }
            }
        }
        }
    }
    cout<<"no";
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
