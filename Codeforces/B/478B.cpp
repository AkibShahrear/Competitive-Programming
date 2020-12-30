#include<bits/stdc++.h>
using namespace std;
long long f(long long x)
{
    return x*(x-1)/2;
}
int main()
{
    long long n,m,a,x,y;
    cin>>n>>m;
    a=n-m+1;
    y=f(a);
    a=n/m;
    x=f(a+1)*(n%m)+f(a)*(m-n%m);
    cout<<x<<" "<<y;
    return 0;

}
