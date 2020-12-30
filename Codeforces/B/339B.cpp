#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
      long long  cnt=a[0]-1;
          for(int i=1;i<m;i++)
        {
            if(a[i]<a[i-1])
            {
                long long t=(n-a[i-1])+a[i];
                //cout<<"t: "<<t<<'\n';
                cnt+=t;
            }
            else if(a[i]>a[i-1])
            {
                long long p=a[i]-a[i-1];
                //cout<<"p: "<<p<<'\n';
                cnt+=p;
            }
        }
        cout<<cnt<<'\n';
}
