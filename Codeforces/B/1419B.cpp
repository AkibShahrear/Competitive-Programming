/*
if a staircase has n stairs==> n columns
    first column 1 cell high
    second column 2 cell high
nice staircase ==> n disjoint squares
    1 --> 1
    2 --> 6
    3 --> 22
    4 --> 23
    5 --> 27
    6 --> 28
    7 --> 29
    8 --> 93
    9 --> 94
    10 --> 98
    11 --> 99
    12 --> 115
    13 --> 116
    14 --> 120
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x;
        cin >> x;
        int ans = 0;
        long long a = 1;
        while(a * (a + 1) / 2 <= x)
        {
            x -= a * (a + 1) / 2;
            ++ans;
            a = 2 * a + 1;
        }
        cout<< ans<<'\n';
    }

    return 0;
}
