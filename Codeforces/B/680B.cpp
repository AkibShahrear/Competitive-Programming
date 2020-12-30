#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+2];
    int tmp=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    int cnt=0;
        int d;
        int o;
    for(int i=1;i<=n;i++)
    {
        if(a[i]){
          d=i-k;
          o=k-d;
          if(o<1|| o>n|| a[i]==a[o])
          ++cnt;


}
        }

   cout<<cnt<<'\n';


}
