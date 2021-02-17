#include<bits/stdc++.h>
using namespace std;
int a[2000], c[1005];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        c[a[i]]++;
    }
    for(int i = 1; i <= n; i++) a[i] = 0;
    int m = 0;
    for(int i = 1; i <= 1000; i++)
    {
        for(int j = 1; j <= 1000; j++)
        {
            if(c[j]){
                c[j]--;
                a[++m] = j;
            }
        }
    }
    int sum = 0;
    for(int i = 1; i < n ; i++) if(a[i] < a[i + 1]) sum++;
    cout<<sum;
    return 0;
}

