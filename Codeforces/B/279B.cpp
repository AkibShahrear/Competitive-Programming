#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    ll n , t;
    cin >> n >> t;
    int cnt = 0;
    vi x(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int j = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += x[i];
        if(sum > t)
        {
            sum -= x[j];
            j++;
        }
        else{
            cnt = max(cnt , (i - j + 1));
        }
    }

    /*while(i < n)
    {
        j = i;
        if(n - 1 - j < cnt)
        {
            break;
        }
        //cout<<"j: "<<j<<'\n';
        ll sum = 0;
        int c = 0;
        while(sum < t)
        {
            c++;
            sum += x[j];
            j++;
            if(sum > t || j == n)
            {
                break;
            }
        }
        //cout<<"sum: "<<sum<<'\n';
        //cout<<"c: "<<c<<'\n';
        if(sum > t)
        {
            c--;
        }
        cnt = max(c, cnt);
        i++;
    }*/
    cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
