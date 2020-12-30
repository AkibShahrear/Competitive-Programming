#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[2*n+1];
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    sort(a,(a+(2*n)));
    long long cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cnt1+=a[i];
    }
    for(int i=n;i<2*n;i++)
    {
        cnt2+=a[i];
    }
    if(cnt1==cnt2)
    {
        cout<<-1;
    }
    else{
        for(int i=0;i<2*n;i++)
        {
            cout<<a[i]<<" ";
        }
    }


    return 0;
}
