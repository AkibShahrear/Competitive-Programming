#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    for(int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            if((i >> j) & 1)
            {
                sum += a[j];
            }else{
            sum -= a[j];
            }
        }
        sum %= 360;
        if(sum == 0)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
