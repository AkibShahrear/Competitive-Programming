/*
n columns of blocks in a roww
all blocks equal heights
i--> hi(number of blocks)
*/
#include<bits/stdc++.h>
using namespace std;
int h[100];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k,p,l;
        cin >> n >> m >> k;
        p = m;
        memset(h,0,sizeof(h));
        for(int i = 0;i < n; i++)
        {
            cin>> h[i];
        }
       for(int i = 0;i + 1 < n; i++)
       {
           if(h[i] + k < h[i + 1])
           {
               m -= h[i + 1] - h[i] - k;
           }
           else{
            m += h[i] - max(0 , h[i + 1] - k);
           }
           if( m < 0) break;
       }
       printf("%s\n", m < 0?"NO" : "YES");
    }
    return 0;
}
