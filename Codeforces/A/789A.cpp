#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    int a[n];
    long long p=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p += (x+(k-1))/k;

    }
    cout<<(p+1)/2;

}
