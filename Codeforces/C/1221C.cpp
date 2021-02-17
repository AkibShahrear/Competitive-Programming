/*
a student ==> coder/mathematician
or none
perfect at least one coder + one math
three mmbers
c are coders m are mathematicians
x ==> none
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        long long c,m,x;
        cin>>c>>m>>x;
        long long sum = min(c , m);
        long long newsum = (c + m + x)/3;
        cout<<min(sum , newsum)<<'\n';
    }

    return 0;
}
