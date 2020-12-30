#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n],l=0,k=0,sum=0,p=1000000;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum = max(sum,min(a[i]-1,p-a[i]));
    }


    cout<<sum;
}
