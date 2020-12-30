#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int a,b,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>k;
        long long int t=a-b;
        long long d=k-1;
        if(k%2==0)
        {
            cout<<(k/2)*t<<'\n';
        }
        else{

            cout<<(d/2)*t+a<<'\n';
        }

    }

    return 0;
}
