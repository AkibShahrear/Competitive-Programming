#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>d;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=(d-a[i]);
    }
    cout<<sum;
}
