#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long a[k];
    long long mx=1000001000000000100,pos=0,t=0;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        long long p=n/a[i];
        long long s=n-(p*a[i]);
      //  cout<<"p: "<<p<<"\ns: "<<s<<'\n';
        if(s<mx)
        {
            mx=s;
            pos=i;
            t=p;
        }
    }
    cout<<pos+1<<" "<<t;
}
