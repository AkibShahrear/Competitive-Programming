/*n integers
a1 a2 a3 .... an
*/
#include<bits/stdc++.h>
using namespace std;

int a[210],b[210];
int main()
{
    int n;
    cin >> n;
    int q = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        if(a[i] == 1)
        {
            q++;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j >= 0; j--)
        {
            for(int l = 0; l < n; l++)
            {
                b[l] = a[l];
            }
            for(int k = i; k <= j; k++)
            {
                b[k] = 1 - b[k];
            }
            int p = 0,pnt = 0;
            for(int k = 0; k < n; k++)
            {
             //   cout<<b[k]<<" ";
               if(b[k] == 1)
               {
                   p ++;
                  // pnt = max(pnt,p);
               }
              /* else if(b[k] == 0)
               {
                   p = 0;
               }*/
            }
           // cout<<'\n';

            cnt = max(cnt,p);
        }
    }
if(q == n)
{
    cout<< max((cnt - 1),0);
    return 0;
}
    cout<<cnt ;

    return 0;
}
