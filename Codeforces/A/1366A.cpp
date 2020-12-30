#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<(a+b)/3<<'\n';
        }

        else if(a==0 || b==0)
        {
            cout<<0<<'\n';
        }
      /*   else if(a%b==0 || b%a==0)
        {
            cout<<min(a,b)<<'\n';
        }*/
        else{
            cout<<min(a,min(b,(a+b)/3))<<'\n';
        }
    }
}
