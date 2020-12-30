#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long d=b/a;
        long long rem=b%a;
        cout<<rem*(d+1)*(d+1)+(a-rem)*d*d<<'\n';
    }
}
