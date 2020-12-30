#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    long long a[n],sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sum += (n-1);
    if(sum == x)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
