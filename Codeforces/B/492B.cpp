#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l;
    cin>>n>>l;
    double p,k,j,temp,cnt;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int mx=0;
    for(int i=0;i<n-1;i++)
    {
       if(a[i+1]-a[i]>mx)
        mx=a[i+1]-a[i];

    }


     p=mx/2.0;
     k=a[0]-0.0;
      j=(double)l-a[n-1];
    temp=max(j,k);
      cnt=max(temp,p);

     printf("%.10f\n",cnt);
return 0;
}
