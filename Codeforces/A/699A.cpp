#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    cin>>s;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int mn=1<<30;
   int  cnt=0;
   cout<<"mn:"<<mn<<'\n';
   int k;
   int l;
   for(int i=0;i<t;i++)
   {

       if(s[i]=='R' && s[i+1]=='L')
       {
           k=a[i+1]-a[i];
           cnt=1;
            mn=min(mn,k);
       }

   }

  if(mn!=1<<30)
   {
       mn>>=1;
       cout<<mn;
   }
   else{
    cout<<"-1";
   }
}
