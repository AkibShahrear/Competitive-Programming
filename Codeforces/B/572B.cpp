#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int>mp,np;
void solve()
{
    int n,s;
    cin >> n >> s;
    vector<int>B,S;
    for(int i = 0; i < n; i++)
    {
        char d;
        int p , q;
        cin >> d >> p >> q;
        if(d == 'B')
        {
            if(mp[p] == 0)
            {
                B.push_back(p);
            }
            mp[p] += q;
        }
        else{
            if(np[p] == 0)
            {
                S.push_back(p);
            }
            np[p] += q;
        }
    }
    sort(S.begin(), S.end());
    int y = S.size();
    int r  = B.size();
    y = min(s , y);
    r  = min(r , s);
    for(int i = y - 1; i >= 0 ; i--)
    {
        cout<<"S"<<" "<<S[i]<<" "<<np[S[i]] << '\n';
    }
     sort(B.rbegin(), B.rend());
    for(int i = 0; i < r; i++)
    {
        cout<<"B"<<" "<<B[i]<<" "<<mp[B[i]] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
