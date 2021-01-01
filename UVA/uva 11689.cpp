#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b,c,k,j,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        a=a+b;
        int sum=0;
        while(a>=c){
         sum += a/c;
            a= a%c +a/c;
        }


        cout<<sum<<'\n';
    }
    return 0;
}
