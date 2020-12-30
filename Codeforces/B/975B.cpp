#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[15],mx = 0, b[15];
    for(int i = 0; i < 14; i++)
    {
        cin>>a[i];
        //b[i] = a[i];

    }

   for(int i = 0; i < 14; i++)
   {
    if(a[i] == 0) continue;
    for(int j = 0; j < 14; j++)
    {
        if(i != j) b[j] = a[j];
        else b[j] = 0;
    }
    for(int j = 0; j < 14; j++)
    {
        long long v = (a[i] + 13 -j) / 14;
        b[(i+j+1) % 14] += v;
    }
    long long cnt = 0;
    for(int j = 0;j < 14; j++)
    {
        if(b[j] % 2 == 0) cnt += b[j];
    }
    mx = max(mx,cnt);
   }
    cout<<mx;

}
