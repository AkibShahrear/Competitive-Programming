#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int p=a-c;
    int r=b-c;
    int s=p+r+c;
    int t=n-s;
    if(a>=c && b>=c && t>0)
    {
        cout<<t;
    }
    else{
        cout<<-1;
    }
}
