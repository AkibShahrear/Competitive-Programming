#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
int main()
{
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    int ans = -1;
    for(int i = 0; i <= 1000; i++)
    {
        for(int j  = 0; j <= 1000; j++)
        {
            if(a * i + b == c * j + d)
            {
               ans = a * i + b;
               break;
            }
        }
        if(ans != -1)
        {
            break;
        }
    }
    cout<<ans;

}
