#include<bits/stdc++.h>
using namespace std;
const int m=100010;
long long a[m],b[m];
int main()
{

    long long n,m,l,r,t;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i]=b[i]=x;

    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1],b[i]+=b[i-1];

    }

    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>t>>l>>r;
        if(t==1)
        {
            long long sum;
            sum=b[r]-b[l-1];
            cout<<sum<<'\n';
        }
       else if(t==2)
        {

            long long sum;
            sum=a[r]-a[l-1];
             cout<<sum<<'\n';


        }
    }
}

