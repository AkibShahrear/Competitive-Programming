#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=a[0]+1;
    for(int i=0;i<n;i++)
    {
        if(i+1!=n){
        if(a[i+1]>=a[i])
        {
            sum+=(a[i+1]-a[i])+2;
            //cout<<"sum1: "<<sum<<'\n';
        }
        else if(a[i+1]<a[i]){
            sum+=(a[i]-a[i+1])+2;
             //cout<<"sum2: "<<sum<<'\n';
        }
        }

    }
    cout<<sum<<'\n';
}
