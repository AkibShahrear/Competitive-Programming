#include<bits/stdc++.h>
using namespace std;
int a[10010];

int main()
{
 int n;
 cin>>n;
 char b[n];
 for(int i=0;i<n;i++)
 {
     cin>>b[i];
     a[b[i]]++;

 }
 for(int i=0;i<n;i++)
 {
     if(n%2==0){
    if(a[b[i]]>=(n/2))
     {
         cout<<"NO";
         return 0;
     }
     }
         else{
    if(a[b[i]]>=(n/2+1))
     {
         cout<<"NO";
         return 0;
     }
     }
 }
 cout<<"YES\n";
 for(int i=0;i<n;i++)
 {

     cout<<b[i];
 }


}
