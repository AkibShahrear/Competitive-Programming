#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    long long l=min(a,b);
    long long h=(n/l)+1;

    for(long long i=0;i<=n/a;i++)
    {

            if((n-a*i)%b == 0)
            {
                cout<<"YES\n";
                cout<<i<<" "<<(n-a*i)/b<<'\n';
                return 0;
            }

    }
    cout<<"NO\n";
}
