#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int xx=x,yy=y;
        x+=-a+b;
        y+=-c+d;
        if(x1<=x && x2>=x && y1<=y && y2>=y && (x1<x2 || a+b==0) && (y1<y2 || c+d==0))
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }


    }
}
