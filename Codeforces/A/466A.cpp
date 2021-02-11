#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,p=0,k;
    cin>>n>>m>>a>>b;
    k=b/m;
    if(k==a)
    {
        cout<<n*a;
    }
    else if(k<a)
    {
        int j=(n/m)*b;
        int c=n%m;
        int l=c*a;
        if(l>b){
        cout<<j+b;
        }
        else{
            cout<<j+l;
        }
    }
    else{
        cout<<n*a;
    }
}
