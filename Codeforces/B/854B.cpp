#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , k;
    cin >> n >> k;
    if(n == k || k == 0 )
    {
        cout<<0 <<" "<<0;
        return 0;
    }
    else
    {
    cout<< 1 <<" "<<min(n - k , k * 2);
    }

    return 0;
}
