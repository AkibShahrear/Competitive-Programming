#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=n;i>=1;i--)
    {
        int t=((i-2)*(i-1))/2;
        sum+=(i+t);

    }
    cout<<sum;
}
