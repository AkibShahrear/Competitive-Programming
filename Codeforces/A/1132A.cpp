#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,cnt1,cnt2;
    cin>>a>>b>>c>>d;
    cnt1=2*a;
    cnt2=2*d;
    cnt1+=c;
    cnt2+=c;
    if(a==0 && d==0 && c!=0)
    {
        cout<<0;
        return 0;
    }
    if(cnt1==cnt2)
    {
        cout<<1;
            }

     else{
        cout<<0;
     }
}
