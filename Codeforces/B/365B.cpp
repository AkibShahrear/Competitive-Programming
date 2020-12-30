#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int sum=2,idx,best=2;
    for(int i=2;i<n;i++)
    {
            sum++;

        if(a[i-1]+a[i-2]!=a[i]){
            sum=2;
        }
        best=max(best,sum);
    }
    cout<<sum;
}
