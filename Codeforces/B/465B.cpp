#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int p=0,z=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            cnt++;
        }
        if(a[i]==1 && p==0) cnt++;
        p=a[i];
    cout<<"cnt: "<<cnt<<'\n';

    }
    cout<<max(0,cnt-1);

}
