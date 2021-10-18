#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
map<int , int>mp;
void solve()
{
    int n;
    cin >> n;
    vi a(n) , b(n);
    int zero_cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if(a[i] == 0)
        {
            zero_cnt++;
        }
    }
    sort(a.rbegin() , a.rend());
    int pile_cnt = 1 , s = 0;
    for(int i = 0; i < 111; i++)
    {
        s += mp[i];
        pile_cnt = max(pile_cnt , (s + i)/(i + 1));

    }
    //cout<<"zero_cnt: "<<zero_cnt<<'\n';
    cout<<pile_cnt;
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
