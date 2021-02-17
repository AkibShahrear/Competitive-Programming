#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a , b , n;
        cin >> a >> b >> n;
        vector<long long>x(n) , y(n);
        long long sum = 0, num = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x[i];

        }
         for(int i = 0; i < n; i++)
        {
            cin >> y[i];
            sum += y[i];
        }
        vector<pair <ll,ll> >v;
        for(int i = 0 ; i < n; i++)
        {
            v.push_back(make_pair(y[i],x[i]));
        }
        sort(v.begin(),v.end());
        long long p  = 0;
        for(int i = 0 ; i < n; i++)
        {
            long long l = (y[i]/a) + (y[i] % a > 0);
            p += 1LL * l * x[i];

        }
            long long mx  = 0;
            for(int i = 0 ; i < n; i++) mx = max(mx , x[i]);
            if(p - mx < b)
            {


            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        x.clear();
        y.clear();
        v.clear();
    }

    return 0;
}

