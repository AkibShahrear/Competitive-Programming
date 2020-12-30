#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,b,v;
    cin>>k>>a>>b>>v;
    int l = k * v;
    if(l>a)
    {
        cout<<1;
    }
    else{
        int cnt = 1;
        a -= l;
        cout<<"a: "<<a<<'\n';
        if(a % v == 0)
        {
            cnt += (a / v);
        }
        else{
            cnt += (a / v) ;
            cnt += 1;

        }
        cout<<cnt;
    }
}
