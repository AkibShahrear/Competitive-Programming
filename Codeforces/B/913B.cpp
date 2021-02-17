/*
2,3,4,6,7,8

*/
#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    int n;
    cin >> n;
    vector<int>v(n),p(n);
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
        v[a[i]]++;
    }
    for(int i = 0;i < n; i++)
    {
        if(v[i] == 0)
        {
           cout<<"a[i]: "<<a[i]<<'\n';
            p[a[i]]++;
        }
    }
    for(int i = 0;i < n; i++)
    {
        if(v[i] > 0 && p[i] < 3)
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}
