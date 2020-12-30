#include<bits/stdc++.h>
using namespace std;
const int N=100100;
int main()
{
    int n;
    cin>>n;
    int x[N],y[N],r[N],h[N],a[N];

    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
          r[x[i]]++;
          h[i]=n-1;

         // cout<<"r[i]: "<<r[i]<<'\n';
    }

    for(int i=0;i<n;i++)
    {

       h[i]+=r[y[i]];
       a[i]=2*(n-1)-h[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<h[i]<<" "<<a[i]<<'\n';
    }

}
