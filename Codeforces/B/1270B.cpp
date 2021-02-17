#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    bool is = 0;
    for(int i = 1;i <= n; i++)
    {
        long long mx = 0, mn = 2000000000;
        for(int j = i; j <= n; j++)
        {
            mx = max(a[j] , mx);
            mn = min(a[j] , mn);
        }
        if((mx - mn) >= (n - i + 1))
        {
            is = 1;
            cout<<"YES\n";
            cout<<i << " " <<n << '\n';
            break;
        }
    }
    if(!is){
     for(int i = 1;i <= n; i++)
    {
        long long mx = 0, mn = 2000000000;
        for(int j = 1; j <= n - i; j++)
        {
            mx = max(a[j] , mx);
            mn = min(a[j] , mn);
        }
        if((mx - mn) >= (n - i + 1))
        {
            is = 1;
            cout<<"YES\n";
            cout<<i << " " <<n <<'\n';
            break;
        }
    }
    }
    if(!is)
    {
         for(int i = 1;i <= n; i++)
    {
        long long mx = 0, mn = 2000000000;
        for(int j = i + 1; j <= n - i; j++)
        {
            mx = max(a[j] , mx);
            mn = min(a[j] , mn);
        }
        if((mx - mn) >= ((n - i) - (i + 1) + 1))
        {
            is = 1;
            cout<<"YES\n";
            cout<<i << " " <<n <<'\n';
            break;
        }
    }
    }
    if(!is){
        cout<<"NO\n";
    }
    }
    return 0;
}
