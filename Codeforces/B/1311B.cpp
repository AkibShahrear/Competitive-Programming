/*
array a of len n
distinct positions p1,p2...pm
pi means you can swap a[i] --> a[i+111

*/
#include<bits/stdc++.h>
using namespace std;
int a[200],p[200],b[200];
bool f[110];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(f,0,sizeof(f));
        int n,m;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        for(int i = 1; i <= m; i++)
        {
            cin >> p[i];
            f[p[i]] = 1;
         }
        for(int i = 1; i <= n; )
        {
            int j = i;
            while(f[j]) j++;
            sort(a + i, a + j + 1);
            i = j + 1;
        }
        bool is = 1;
        for(int i = 2; i <= n; i++)
        {
            if(a[i] < a[i - 1])
            {
                cout<<"NO\n";
                is = 0;
                break;
            }
        }
        if(is)cout<<"YES\n";
    }
    return 0;
}
