#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    int cnt=0;
    if(a==1 && b==1)
    {
        cnt=0;
    }
    else{
    while(a>0 && b>0)
    {
        int crg=min(a,b);
        int dis=max(a,b);
        crg+=1;
        dis-=2;
        a=crg;
        b=dis;
        cnt++;
    }
    }
    cout<<cnt<<'\n';
}
