#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n],sum=0;
    bool is=0;
        for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==0)
        {
            if(sum%2!=0)
            {
                is=1;
            }
        }
    }



    if(sum==0)
    {
        cout<<"YES";
        return 0;
    }
    if(sum%2==0 && !is )
    {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}
