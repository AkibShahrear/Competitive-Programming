#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isluck(long long n)
{

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int d , q;
        cin >> q >> d;
        for(int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            if(x %d == 0) puts("YES\n");
            else{
                int r = x % d + d * 10;
                if(x >= r) puts("YES");
                else{
                    bool is = false;
                    for(int i = 1; i <= 100; i++)
                    {
                        int r = x - d * i;
                        if(r >= 0 && r % 10 == 0) is = true;
                    }
                    if(is) puts("YES");
                    else puts("NO");
                }
            }
        }
    }
    return 0;
}
