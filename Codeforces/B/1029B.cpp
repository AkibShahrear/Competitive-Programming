/*
n problems
i --> a[i]

*/
#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = 0;
    for(int i = 0; i < n; ++i)
    {
        int j = i;
        cout<<"a[j]: "<<a[j]<<'\n';
       while( j + 1 < n && a[j + 1] <= 2*a[j])
       {
           ++j;
           //cout<<"new a[j]: "<<a[j]<<'\n';
           //cout<<"j + 1: "<<j + 1<<"   2 * a[j]: "<<2*a[j]<<'\n';
       }
        mx = max(mx , j - i + 1);
         i = j ;
    }
    cout<<mx;
    return 0;
}
