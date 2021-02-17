/*
ai --> i th min
array t ==> Mishuka's behavior

*/
#include<bits/stdc++.h>
using namespace std;
int a[1000000],t[1000000],b[1000000];
int main()
{
    int n , k;
    cin>> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    vector<int>v(n);
    int mx = 0;
    for(int i = 0; i < n ; i++)
        {
            if(i) v[i] += v[i - 1];//1 4 9 11 16 20
            if(t[i] == 0) v[i] += a[i];//1 4 14 11 21 24
            else mx += a[i];
        }
       // cout<<"mx: "<<mx<<'\n';
       int sum = 0;
        for(int i = k - 1; i < n; i++)
        {
           sum = max(sum , v[i] - (i >= k ? v[i - k] : 0));
        }
        cout<<mx + sum<<'\n';
    return 0;
}
