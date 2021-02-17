#include<bits/stdc++.h>
using namespace std;
long long d[1000000], a[1000000];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    if(n == 1)
    {
        cout<<0;
        return 0;
    }
    if(n == 2)
    {
        if(d[0] == d[1])
        {
            cout<<d[0];
            return 0;
        }
        else{
            cout<<0;
            return 0;
        }
    }
    int j = 0, k = n - 1;
    long long cnt = 0,pnt = 0,l = 0,m = 0;
    bool is = 0;
    while(j <= k)
    {
     if(cnt < pnt)
     {
         cnt += d[j++];
     }
     else
        pnt += d[k--];
     if(cnt == pnt && cnt > l)
     {
         l = cnt;
     }
    }
   cout<<l;

    return 0;
}
