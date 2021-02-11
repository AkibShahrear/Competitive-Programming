#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, a, b, v, cnt = 0;
    cin >> k >> a >> b >> v;
    k--;
    for(int i = 1; i <= a; i++)
    {
        if(b >= k)
            b -= k, cnt += (k + 1) * v;
        else
            cnt += (b + 1) * v, b = 0;
        if(cnt >= a)
            return cout << i, 0;
    }
    return 0;
}














































































