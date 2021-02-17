#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , a , b;
    cin >> n >> a >> b;
    for(int x = min(a , b); ; x--)
    {
        int p = a/x;
        int q = b/x;
        if(p + q >= n)
        {
            cout<<x<<'\n';
            return 0;
        }
    }
}
