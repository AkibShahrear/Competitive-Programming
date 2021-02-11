/*
a(n + 1) = a(n) + minDigit(a(n)).maxDigit(a(n))
input ==> a1 K
output==>a(k)

*/
#include<bits/stdc++.h>
using namespace std;
long long cntmn( long long a)
{
    long long mn = 1e18 + 10,mx = 0;
    while(a)
    {
        long long p = a %10;
        a /= 10;
        mn = min(mn , p);
        mx = max(mx , p);
    }
    return mn * mx;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a1,k;
        cin>> a1 >> k;
        while(cntmn(a1) != 0)
        {
            k--;
             if(k == 0)
            {
                break;
            }
            a1 += cntmn(a1);

        }
        cout<<a1<<'\n';
    }


    return 0;
}
