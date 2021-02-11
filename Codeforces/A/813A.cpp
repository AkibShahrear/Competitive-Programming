#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    cin>>m;
    int b[m],l[m],r[m];
    for(int i = 0; i < m; i++)
    {
       cin >> l[i] >> r[i];
       if(sum >= l[i] && sum <= r[i])
       {
           cout<<sum;
           return 0;
       }
       else if(l[i] > sum)
       {
           cout<<l[i];
           return 0;
       }
    }
    cout<<-1;
    return 0;
}
