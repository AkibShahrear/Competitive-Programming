#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    long long t=0,i=1;
    while(a>t)
    {
        t+=i;
        if(t>=a)
        {
            t=t-i;
            break;
        }
        i++;
    }
     //t=t-i;
   // t=(l*(l+1))/2;
    cout<<a-t;

}
