/*
n house
both sides of the road
odd num one side(1 --> n-1)
even num other side(2 --> n)
1 == n
3 == n - 2
5 == n - 4
house a
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>n>>a;
    if(a % 2 == 0)
    {
        int cnt = 1;
        while(n != a)
        {
            cnt++;
            n -= 2;
        }
        cout<<cnt;
    }
    else{
        int p = 1;
        int cnt = 1;
        while(p != a)
        {
            cnt++;
            p += 2;
        }
        cout<<cnt;
    }

    return 0;
}
