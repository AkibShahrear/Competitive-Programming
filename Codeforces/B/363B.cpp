#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i] += a[i-1];

    }
    for(int i=1;i<=n;i++)
    {
         cout<<"a[i]: "<<a[i]<<'\n';
    }

    int sum=3e8,p;
    for(int i=k;i<=n;i++){

        if(a[i]-a[i-k]<sum){


            sum =  a[i] - a[i-k];
            cout<<"sum: "<<sum<<'\n';
            p=i-k;
        }
    }
    cout<<p+1;
    return 0;

}
