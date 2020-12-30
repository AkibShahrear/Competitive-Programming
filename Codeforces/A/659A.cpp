#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    b=(b+c)%a;
    if(b<=0) b+=a;
    cout<<b;


}
