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
   int p1=0,p2=n-1;
   int i=2;
   while(i<=n && a[i]>a[i-1]) i++;
   while(i<=n && a[i]==a[i-1]) i++;
   while(i<=n && a[i]<a[i-1]) i++;
   cout<<(i<=n? "NO":"YES");
   return 0;
}
