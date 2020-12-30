#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int p=n-a[0];
   for(int j=0;j<p;j++){
    for(int i=1;i<n;i++)
    {

       if(i%2==0)
       {
           a[i]+=1;
           a[i]%=n;
       }
       else{
        a[i]-=1;
        if(a[i]==-1)
        {
            a[i]=n-1;
        }
       }

    }
   }
    int j=1;
    for(int i=1;i<n;i++)
    {
       if(a[i]!=j)
        {
            cout<<"No";
            return 0;
        }
   //     cout<<a[i]<<" ";
         j++;
    }
    cout<<"Yes";
    }

