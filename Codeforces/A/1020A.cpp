#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,h,a,b,k,fa,fb,ta,tb;
    cin>>n>>h>>a>>b>>k;
    for(int i=0;i<k;i++)
    {
        long long cnt=0;
        bool is=0;
        cin>>ta>>fa>>tb>>fb;
     if(ta==tb)
     {
         cout<<abs(fa-fb);

     }
     else{
        if(fa<a && fb<a) cout<<abs(ta-tb)+a-fa+a-fb;
        else if(fa>b && fb>b)cout<<abs(ta-tb)+fa-b+fb-b;
        else cout<<abs(ta-tb)+abs(fa-fb);
     }
     cout<<endl;
    }
}
