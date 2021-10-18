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
    ll sum1 = 0, sum2 = 0, last = 0;
    vi pos, neg;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x < 0)
        {
            neg.pb(abs(x));
            sum2 += (abs(x));
        }
        else{
            pos.pb(x);
            sum1 += x;
        }
        last = x;
    }
    if(sum1 != sum2)
    {
        if(sum1 > sum2){cout<<"first";}
        else{
            cout<<"second";
        }
    }
    else{
        int l = neg.size();
        int m = pos.size();
        if(l > m)
        {
            int cnt = 0;
            int p = 0;
            for(int i = 0; i < m; i++)
            {
                if(pos[i] != neg[i])
                {
                    cnt++;
                    p = i;
                    break;
                }
            }
            if(cnt > 0)
            {
                int x = pos[p];
                int y = neg[p];
                if(x > y)
                {
                    cout<<"first";
                    return;
                }
                else{
                    cout<<"second";
                    return;
                }
            }
            else{
                cout<<"second";
                return;
            }
        }
        else if(m > l)
        {
            int cnt = 0;
            int p = 0;
            for(int i = 0; i < l; i++)
            {
                if(pos[i] != neg[i])
                {
                    cnt++;
                    p = i;
                    break;
                }
            }
            if(cnt > 0)
            {
                int x = pos[p];
                int y = neg[p];
                if(x > y)
                {
                    cout<<"first";
                    return;
                }
                else{
                    cout<<"second";
                    return;
                }
            }
            else{
                cout<<"first";
                return;
            }
        }
        else{
            int cnt = 0, p = 0;
            for(int i = 0; i < l; i++)
            {
                if(pos[i] != neg[i])
                {
                    cnt++;
                    p = i;
                    break;
                }
            }
            if(cnt > 0)
            {
                int x = pos[p];
                int y = neg[p];
                if(x > y)
                {
                    cout<<"first";
                    return;
                }
                else{
                    cout<<"second";
                    return;
                }
            }
            else{
                if(last > 0)
                {
                    cout<<"first";
                    return;
                }
                else{
                    cout<<"second";
                    return;
                }
            }
        }
    }
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
