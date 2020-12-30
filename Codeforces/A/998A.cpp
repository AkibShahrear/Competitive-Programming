#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long long sum=0,mn=11010,p;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]<mn)
        {
            mn=a[i];
            p=i;
        }

    }
    if(n==1)
    {
        cout<<-1;
        return 0;
    }
    sort(a,a+n);
    if((sum-a[0])==a[0])
    {
        cout<<-1;
    }

    else{
          cout<<1<<'\n';
          cout<<p+1;
    }


}
