#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long  a[n],b[n],sum=0;
     bool is=true;
    for(long long i=0;i<m;i++)
    {
        cin>>a[i];
         if(a[i]==n || a[i]==1){
            cout<<"NO\n";
            return 0;
        }

        else if(sum<a[i])
        {
            sum=a[i];
        }
        else
        {
            is=false;

        }
    }
   // sort(b,b+m);

    /*for(long long i=0;i<m;i++)
    {
        if(a[i+1]<a[i]){
            is=false;
            break;
        }
    }*/
    if(is)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
