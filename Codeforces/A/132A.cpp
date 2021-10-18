#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    string s;
    getline(cin,s);
    int ans = 0;
    for(int i = 0; i < s.length(); i++)
    {
        int p = s[i];
        //cout<<"p: "<<p<<'\n';
        int q = p;
        vi a;
        while(q)
        {
            int t = q%2;
            q /= 2;
            a.push_back(t);
        }
        reverse(a.begin() , a.end());
        /*for(int i = 0; i < a.size(); i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';*/
        int sum = 0;
        int cnt = 8 - a.size();
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == 1)
            {
                //cout<<"cnt: "<<cnt<<'\n';
                sum += pow(2,(i + cnt));
            }
        }
        //cout<<"sum: "<<sum<<'\n';
        //cout<<"ans: "<<ans<<'\n';
        int newcnt = (ans - sum)%256;
        if(newcnt < 0)
        {
            newcnt = 256 + newcnt;
        }
        cout<<newcnt<<'\n';
        ans = sum;
        a.clear();
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
