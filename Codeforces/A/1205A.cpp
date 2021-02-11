/*
1 2 3 4 5 6 7 8
1 5 6 7 2 3 4 8
1 2 3 4 5 6 7 8 9 10
1 9 3 7 4 5 6 2 8 10
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    long long n;
    cin >> n;
    if(n & 1)
    {
        cout<<"YES\n";
        for(int i = 0;i < n; i++)
        {
            a[i] = 2*i + 1;
            a[i + n] = 2 * i + 2;
            if(i & 1) swap(a[i],a[i + n]);

        }
        for(int i = 0; i < 2*n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
