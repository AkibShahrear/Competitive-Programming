#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    long long mn=200100100;
    for(int i=2;i<=n;i++)
    {
        int cnt=0;
     for(int j=2;j<=n;j++)
     {
         int p=2*((i-1)+abs(j-i))+2*(j-1);
         cnt+=a[j]*p;
     }
     //cout<<"cnt: "<<cnt<<'\n';
     if(mn>cnt)
     {
         mn=cnt;
     }


    }
    cout<<mn;
}
