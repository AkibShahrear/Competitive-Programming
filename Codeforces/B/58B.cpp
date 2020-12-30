#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    int i=1;
    //cout<<n<<" ";
    while(i*i<=n)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
            n/=i;
            i=1;
        }
        i++;
    }
    cout<<1;
}
