#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

map<int,int>c,j,cnt;
map<int,char>te;
void solve()
{
    string home , away;
    cin >> home >> away;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    int t;
    cin >> t;
    char type;
    cin >> type;
    int p_num;
    cin >> p_num;
    char card;
    cin >> card;
    if(card == 'y')
    {
        if(c[p_num] < 2)
        {
            c[p_num]++;
            if(c[p_num] == 2)
            {
             c[p_num] = 111;
             j[p_num] = t;
             te[p_num] = type;
            }
        }
    }
    else if(card == 'r')
    {
        if(c[p_num] < 2)
        {
            c[p_num] = 111;
            j[p_num] = t;
            te[p_num] = type;
        }
    }
    }
    for(int i = 0; i <= 90; i++)
    {
        if(j[i] > 0)
        {
            cout<<"j[i]: "<<j[i]<<" "<<i<<'\n';
            cnt[j[i]] = i;
        }
    }
     for(int i = 0; i <= 90; i++)
    {
        if(cnt[i] > 0)
        {
            if(te[cnt[i]] == 'h')
            {
                cout<<home<<" ";
            }
            else{
                cout<<away<<" ";
            }
            cout<<cnt[i]<<" "<<i<<'\n';
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
