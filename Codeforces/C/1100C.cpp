#include<bits/stdc++.h>
using namespace std;
typedef double d;
#define pi acos(-1)
int main()
{
    d n , r;
    cin >> n >> r;
    d q = (180/n);
    d s = sin(q*pi/180);
    d t = s * r;
   //1 cout<<"q: "<<q<<" s: "<<s<<" t: "<<t<<'\n';
    printf("%0.7lf",t/(1 - s));
    return 0;
}
