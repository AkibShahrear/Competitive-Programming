#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
//vector<ll> v ={47,74,4477,4747,4774,7447,7474,7744,444777,447747,447477,447774,477744,744477,744774,747744,747447,774447,774474,}
void solve()
{
    ll n;
    cin >> n;
    ll p = n;
    int cnt = 0;
    while(n)
    {
        cnt++;
        n /= 10;
    }
    if(cnt % 2 == 0)
    {
        //cout<<"Hi";
        vi a;
        for(int i = 0; i < cnt/2; i++)
        {
          a.push_back(4);
        }
        for(int i = cnt/2; i < cnt; i++)
        {
            a.push_back(7);
        }

        do{
            ll sum = 0;
            for(int i = 0; i < a.size(); i++)
            {
               // cout<<a[i]<<" ";
                sum += a[i];
                sum *= 10;
            }
            sum /= 10;
            //cout<<'\n';

            if(sum >= p)
            {
                 cout<<sum<<'\n';
                 return;
            }
        }while(next_permutation(a.begin(), a.end()));
        cnt += 2;
        ll sum = 0;
        for(int i = 0; i < cnt/2; i++)
        {
            sum += 4;
            sum *= 10;
        }
        for(int i = cnt/2; i < cnt; i++)
        {
            sum += 7;
            sum *= 10;
        }
        cout<<sum/10;

    }
    else{
        cnt += 1;
         ll sum = 0;
        for(int i = 0; i < cnt/2; i++)
        {
            sum += 4;
            sum *= 10;
        }
        for(int i = cnt/2; i < cnt; i++)
        {
            sum += 7;
            sum *= 10;
        }
        cout<<sum/10;

    }
}

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
