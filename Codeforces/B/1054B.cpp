#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a;
    long long l=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>l+1)
        {
            cout<<i+1;
            return 0;
        }
        l=max(l,a);
    }
    cout<<-1;
    return 0;


}

