#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int one=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            zero++;
        }

    }
    if(n==1)
    {
        if(a[0]==1)
        {
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    if(zero==1)
    {
        cout<<"YES";
    }
    else {cout<<"NO";}
}
