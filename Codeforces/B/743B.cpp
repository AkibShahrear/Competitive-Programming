/*
8 4
(1,
1 2 3
1 2 1 3 1 2 1
1 2 3 4
1 2 1 3 1 2 1 4 1 2 1 3 1 2 1
1 2 3 4 5
1 2 1 3 1 2 1 4 1 2 1 3 1 2 1 5 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1
2 3 2 4 2 3 2 5 2 3 2 4 2 3 2 6
2==>1000
2>>1==>0100
2>>2==>0010
2>>3==>0001
27>>0==>11011
27>>1==>011011
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n >> n;
    long long sum = 0;
    while(((n >> sum) & 1) == 0) sum++;
    cout<<sum + 1;

    return 0;
}
