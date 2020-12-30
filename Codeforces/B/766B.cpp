#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    bool is=true;
    for(int i=0;i<n;i++)
    {
        if(i+2<n){
        if(a[i]+a[i+1]>a[i+2])
        {
            is=false;
            break;
        }


        }
    }
    if(!is)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}
