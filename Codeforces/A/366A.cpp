#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,q,r;
    bool is = 0;
    for(int i = 1; i <= 4; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int l = min(a,b),t = min(c,d);
        if(l + t <= n)
        {
            is = 1;
         //   cout<<i<<" "<<l<<" "<<t;
            p = i,q = l,r = t;

        }
    }
    if(is)
    {
        cout<<p<<" "<<q<<" "<<n-q;
    }
    else
    cout<<-1;
    return 0;
}


