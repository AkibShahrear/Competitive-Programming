/*
n pages
1 --> n
every time he finishes the page which
is divisible by m he writes down last
digit of page num

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        long long n,m,sum = 0,p = 0;
        cin >> n >> m;
        n /= m;
        for(int i = 1; i <= 10 && i <= n; ++i)
        {
            long long cnt = (n - i) / 10 + 1;
           // cout<<"cnt: "<<cnt<<'\n';
            sum += (i * m % 10) * cnt;
         //   cout<<"sum: "<<sum<<'\n';
        }
        cout<<sum<<'\n';
    }

    return 0;
}
