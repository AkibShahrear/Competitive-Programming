#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        sort(a.begin(),a.end());
        long long mx = -2e18;
        for(int i = 0; i <= 5; i++)
        {
            long long p = 1;
            for(int j = 0 ; j < i; j++) p *= a[j];
            for(int j = i; j < 5; j++) p *= a[n - 5 + j];
            mx = max(mx,p);
        }
        cout<<mx<<'\n';
    }
}
