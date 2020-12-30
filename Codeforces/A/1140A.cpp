#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1,j=1;i<=n;i++)
    {
           //cout<<"j: "<<j<<'\n';
        j=max(a[i],j);

        if(j==i) ++cnt;
      //  cout<<"cnt: "<<cnt<<'\n';
    }
    cout<<cnt;

}
