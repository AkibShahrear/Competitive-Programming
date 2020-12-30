#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;


    int low=1,high=n;
    while(low!=high){
        long long ans=0;
    int mid=(low+high)/2;
    int m=mid;
    while(mid){
        ans+=mid;
        mid/=k;
    }
    if(ans<n)low=m+1;
    else
        high=m;
    }
    cout<<low;
}
