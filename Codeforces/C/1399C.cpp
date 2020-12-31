/*
n people
weight of i ==> wi
only team consisting of 2 people
allow only teams with the sam total
weight
*/
#include<bits/stdc++.h>
using namespace std;
int a[200],c[200];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>b(n + 1);
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            ++b[x];
        }
       int cnt = 0;
       for(int i = 2; i <= 2 * n; ++i)
       {
           int cur  = 0;
           for(int j = 1; j < (i + 1) / 2 ; ++j)
           {
               if(i - j > n )continue;
               cur += min(b[j] , b[i - j]);
             //  cout<<"b[j]: "<<b[j]<<'\n'<<"b[i - j]: "<<b[i - j]<<'\n';
              // cout<<"i: "<<i<<" j: "<<j<<" cur: "<<cur<<'\n';
           }
           if( i % 2 == 0) cur += b[i / 2] / 2;
           cnt = max(cnt , cur);
       }
       cout<<cnt<<'\n';
    }

    return 0;
}
