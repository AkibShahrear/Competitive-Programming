/*
a(n) ==> a1,a2,a3...an
k segments
each segment odd sum

*/
#include<bits/stdc++.h>
using namespace std;
long long a[1200000];
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n , k;
        cin >> n >> k;
        memset(a,0,sizeof(a));
        vector<long long>v;
         v.clear();
        int even = 0,odd = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long cnt = 0;
        for(int i = 0; i < n; i++)
        {
            cnt += a[i];
            if((cnt & 1) && v.size() < k - 1)
            {
                v.push_back(i);
                cnt = 0;
            }
        }
        if(cnt & 1)
        {
            v.push_back(n - 1);
            cout<<"YES\n";
            for(auto &x : v)
                cout<<x + 1;
            cout<<'\n';
        }
        else{
            cout<<"NO\n";
        }

    }

}
