#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    int a,b;
    cin>>n>>m>>a>>b;
    if(n%m==0)
    {
        cout<<0<<'\n';
    }
    else{
        if(n>m)
        {
            long long p=(n-m)*b;
            long long k=((((n/m)+1)*m)-n)*a;
            long long g=(n%m)*b;
            cout<<min(p,min(k,g));
        }
        else{
            long long p=(m-n)*a;
            long long k=(n%m)*b;
            cout<<min(p,k);
        }
    }
}
