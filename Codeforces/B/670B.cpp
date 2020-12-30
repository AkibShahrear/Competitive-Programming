#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long id[n];
    for(int i=1;i<=n;i++)
    {
        cin>>id[i];
    }
    if(k==1)
    {
        cout<<id[1];
        return 0;
    }
    long long i=1,p;

    while(n)
    {

        p=(i*(i+1))/2;
        if(p>=k)
        {
            break;
        }
        i++;
    }
    //cout<<"i: "<<i-1<<'\n';
    long long h=((i-1)*i)/2;
    long long u=k-h;
    cout<<id[u];
}
