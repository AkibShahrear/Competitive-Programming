#include<bits/stdc++.h>
using namespace std;
long long a[1000010];
int main()
{
    int n;
    cin >> n;
    long long p = 0;
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    sort(a , a + n);
    for(int i = 0; i < n; i++)
    {
        if(p < a[i])
        {
            p++;
        }
    }
    cout<<p + 1;
    return 0;
}
