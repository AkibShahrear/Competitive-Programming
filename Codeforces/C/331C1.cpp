#include<bits/stdc++.h>
using namespace std;
vector<int>v;
mxnm(long long n)
{
    int mx = 0;
    while(n)
    {
        if((n%10)>mx)
        {
            mx = n%10;
        }
        n /= 10;
    }
    return mx;
}



int main()
{

    long long n;
    cin>>n;
    //cout<<fn(n);
    int cnt = 0;
    while(n != 0)
    {
        n = n - mxnm(n);
        cnt++;
    }
    cout<<cnt;
    return 0;
}

